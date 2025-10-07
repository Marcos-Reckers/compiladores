%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "asd.h"

int yylex(void);
void yyerror (char const *mensagem);
extern asd_tree_t *arvore; /* raiz global da AST definida em main.c */
%}

%code requires {
  #include "asd.h"
  typedef struct valor_lexico_s {
      int linha;     /* número da linha do lexema */
      int tipo;      /* 0: identificador, 1: literal */
      char *valor;   /* cópia do lexema (strdup de yytext) */
  } valor_lexico_t;
}

%union {
  asd_tree_t *node;         /* nós da AST para não-terminais */
  valor_lexico_t valor_lexico; /* valor léxico para TK_ID e literais */
}

%token TK_TIPO
%token TK_VAR
%token TK_SENAO
%token TK_DECIMAL
%token TK_SE
%token TK_INTEIRO
%token TK_ATRIB
%token TK_RETORNA
%token TK_SETA
%token TK_ENQUANTO
%token TK_COM
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token <valor_lexico> TK_ID
%token <valor_lexico> TK_LI_INTEIRO
%token <valor_lexico> TK_LI_DECIMAL
%token TK_ER

%type <node> programa lista_elementos_opt lista_elementos elemento definicao_funcao tipo parametros_opt lista_parametros parametro bloco_comandos lista_comandos_opt lista_comandos comando_simples declaracao_variavel_global declaracao_variavel_local inicializacao_opt literal comando_atribuicao chamada_funcao argumentos_opt lista_argumentos comando_retorno comando_condicional senao_opt comando_enquanto expressao expressao_or expressao_and expressao_eq expressao_rel expressao_add expressao_mul expressao_unaria expressao_primaria

%define parse.error verbose

%%

programa:
    lista_elementos_opt ';'   { $$ = $1; arvore = $1; }
  ;

lista_elementos_opt:
    /* vazio */               { $$ = NULL; }
  | lista_elementos           { $$ = $1; }
  ;

lista_elementos:
    elemento                  { $$ = $1; /* será a raiz (1a função) */ }
  | elemento ',' lista_elementos
                              {
                                /* encadeia funções: cada função tem como 1o filho seu 1o comando, e como 2o filho a próxima função */
                                if ($1 == NULL) { $$ = $3; }
                                else if ($3 == NULL) { $$ = $1; }
                                else { asd_add_child($1, $3); $$ = $1; }
                              }
  ;

elemento:
    definicao_funcao          { $$ = $1; }
  | declaracao_variavel_global{ $$ = NULL; /* não faz parte da raiz de funções */ }
  ;

definicao_funcao:
    TK_ID TK_SETA tipo parametros_opt TK_ATRIB bloco_comandos
                              {
                                /* Nó da função nomeado pelo identificador */
                                asd_tree_t *func = asd_new($1.valor);
                                /* child 1: primeiro comando do corpo (bloco_comandos já retorna o 1o comando) */
                                if ($6) asd_add_child(func, $6);
                                /* o child 2 (próxima função) será adicionado em lista_elementos */
                                $$ = func;
                                /* libera a cópia do lexema do yylval (asd_new já fez sua própria cópia) */
                                free($1.valor);
                              }
    ;

tipo:
    TK_DECIMAL                { $$ = NULL; }
  | TK_INTEIRO                { $$ = NULL; }
  ;

parametros_opt:
    /* vazio */               { $$ = NULL; }
  | TK_COM lista_parametros   { $$ = $2; }
  | lista_parametros          { $$ = $1; }
  ;

lista_parametros:
    parametro                 { $$ = NULL; }
  | lista_parametros ',' parametro
                              { $$ = NULL; }
  ;

parametro:
    TK_ID TK_ATRIB tipo       { free($1.valor); $$ = NULL; }
  ;

bloco_comandos:
  '[' lista_comandos_opt ']'
                { $$ = $2; /* bloco não vira nó; retorna o 1o comando */ }
  ;

lista_comandos_opt:
    /* vazio */               { $$ = NULL; }
  | lista_comandos            { $$ = $1; }
  ;

lista_comandos:
    comando_simples           { $$ = $1; }
  | comando_simples lista_comandos
                              {
                                /* constrói lista encadeada de comandos: cada comando aponta para o próximo como um filho adicional */
                                if ($1 == NULL) { $$ = $2; }
                                else { if ($2) asd_add_child($1, $2); $$ = $1; }
                              }
  ;

comando_simples:
    bloco_comandos            { $$ = $1; }
  | declaracao_variavel_local { $$ = $1; }
  | comando_atribuicao        { $$ = $1; }
  | chamada_funcao            { $$ = $1; }
  | comando_retorno           { $$ = $1; }
  | comando_condicional       { $$ = $1; }
  | comando_enquanto          { $$ = $1; }
  ;

/* Declaração de variável global (elemento) - SEM inicialização */
declaracao_variavel_global:
  TK_VAR TK_ID TK_ATRIB tipo { free($2.valor); $$ = NULL; }
  ;

/* Declaração de variável local (comando simples) - COM inicialização opcional */
declaracao_variavel_local:
    TK_VAR TK_ID TK_ATRIB tipo inicializacao_opt
                              {
                                if ($5) {
                                  /* nome do nó: lexema de TK_COM, isto é, "com" */
                                  asd_tree_t *no = asd_new("com");
                                  asd_tree_t *id = asd_new($2.valor);
                                  asd_add_child(no, id);
                                  asd_add_child(no, $5); /* literal */
                                  $$ = no;
                                } else {
                                  $$ = NULL; /* sem inicialização não entra na AST */
                                }
                                free($2.valor);
                              }
    ;

inicializacao_opt:
    /* vazio */               { $$ = NULL; }
  | TK_COM literal            { $$ = $2; }
  ;

literal:
    TK_LI_INTEIRO             { asd_tree_t *lit = asd_new($1.valor); $$ = lit; free($1.valor); }
  | TK_LI_DECIMAL             { asd_tree_t *lit = asd_new($1.valor); $$ = lit; free($1.valor); }
  ;

comando_atribuicao:
    TK_ID TK_ATRIB expressao  {
                asd_tree_t *atr = asd_new(":=");
                                asd_tree_t *id = asd_new($1.valor);
                asd_add_child(atr, id);
                if ($3) asd_add_child(atr, $3);
                $$ = atr;
                                free($1.valor);
                }
  ;

chamada_funcao:
    TK_ID '(' argumentos_opt ')'
                              {
                                char buf[256];
                                snprintf(buf, sizeof(buf), "call %s", $1.valor);
                                asd_tree_t *call = asd_new(buf);
                                if ($3) asd_add_child(call, $3); /* primeira expressão da lista */
                                $$ = call;
                                free($1.valor);
                              }
    ;

argumentos_opt:
    /* vazio */               { $$ = NULL; }
  | lista_argumentos          { $$ = $1; }
  ;

lista_argumentos:
    expressao                 { $$ = $1; }
  | expressao ',' lista_argumentos
                              {
                                /* lista encadeada de expressões (argumentos): cada expressão aponta para a próxima */
                                if ($1 == NULL) { $$ = $3; }
                                else { if ($3) asd_add_child($1, $3); $$ = $1; }
                              }
  ;

comando_retorno:
    TK_RETORNA expressao TK_ATRIB tipo
                              {
                                asd_tree_t *ret = asd_new("retorna");
                                if ($2) asd_add_child(ret, $2);
                                $$ = ret;
                              }
    ;

comando_condicional:
    TK_SE '(' expressao ')' bloco_comandos senao_opt
                              {
                                asd_tree_t *n = asd_new("se");
                                if ($3) asd_add_child(n, $3);      /* expressão */
                                if ($5) asd_add_child(n, $5);      /* comando quando verdadeiro */
                                if ($6) asd_add_child(n, $6);      /* comando quando falso (opcional) */
                                $$ = n;
                              }
    ;

senao_opt:
    /* vazio */               { $$ = NULL; }
  | TK_SENAO bloco_comandos   { $$ = $2; }
  ;

comando_enquanto:
    TK_ENQUANTO '(' expressao ')' bloco_comandos
                              {
                                asd_tree_t *n = asd_new("enquanto");
                                if ($3) asd_add_child(n, $3);
                                if ($5) asd_add_child(n, $5);
                                $$ = n;
                              }
    ;

/* Expressão com precedência explícita para evitar conflitos */
expressao:
  expressao_or              { $$ = $1; }
  ;

expressao_or:
    expressao_and             { $$ = $1; }
  | expressao_or '|' expressao_and
                              { asd_tree_t *n = asd_new("|"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
    ;

expressao_and:
    expressao_eq              { $$ = $1; }
  | expressao_and '&' expressao_eq
                              { asd_tree_t *n = asd_new("&"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
    ;

expressao_eq:
    expressao_rel             { $$ = $1; }
  | expressao_eq TK_OC_EQ expressao_rel
                              { asd_tree_t *n = asd_new("=="); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
  | expressao_eq TK_OC_NE expressao_rel
                              { asd_tree_t *n = asd_new("!="); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
    ;

expressao_rel:
    expressao_add             { $$ = $1; }
  | expressao_rel '<' expressao_add
                              { asd_tree_t *n = asd_new("<"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
  | expressao_rel '>' expressao_add
                              { asd_tree_t *n = asd_new(">"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
  | expressao_rel TK_OC_LE expressao_add
                              { asd_tree_t *n = asd_new("<="); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
  | expressao_rel TK_OC_GE expressao_add
                              { asd_tree_t *n = asd_new(">="); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
    ;

expressao_add:
    expressao_mul             { $$ = $1; }
  | expressao_add '+' expressao_mul
                              { asd_tree_t *n = asd_new("+"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
  | expressao_add '-' expressao_mul
                              { asd_tree_t *n = asd_new("-"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
    ;

expressao_mul:
    expressao_unaria          { $$ = $1; }
  | expressao_mul '*' expressao_unaria
                              { asd_tree_t *n = asd_new("*"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
  | expressao_mul '/' expressao_unaria
                              { asd_tree_t *n = asd_new("/"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
  | expressao_mul '%' expressao_unaria
                              { asd_tree_t *n = asd_new("%"); if ($1) asd_add_child(n,$1); if ($3) asd_add_child(n,$3); $$ = n; }
    ;

expressao_unaria:
    expressao_primaria        { $$ = $1; }
  | '!' expressao_unaria      { asd_tree_t *n = asd_new("!"); if ($2) asd_add_child(n,$2); $$ = n; }
  | '+' expressao_unaria      { asd_tree_t *n = asd_new("+"); if ($2) asd_add_child(n,$2); $$ = n; }
  | '-' expressao_unaria      { asd_tree_t *n = asd_new("-"); if ($2) asd_add_child(n,$2); $$ = n; }
    ;

expressao_primaria:
    chamada_funcao            { $$ = $1; }
  | literal                   { $$ = $1; }
  | TK_ID                     { asd_tree_t *id = asd_new($1.valor); $$ = id; free($1.valor); }
  | '(' expressao ')'         { $$ = $2; }
    ;

%%

#include <stdio.h>
extern int yylineno;
void yyerror (char const *mensagem) {
  fprintf(stderr, "Erro sintático na linha %d: %s\n", yylineno, mensagem);
}