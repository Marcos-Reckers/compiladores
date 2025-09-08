%{
int yylex(void);
void yyerror (char const *mensagem);
%}

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
%token TK_ID
%token TK_LI_INTEIRO
%token TK_LI_DECIMAL
%token TK_ER

%define parse.error verbose

%%

programa:
    lista_elementos_opt ';'
    ;

lista_elementos_opt:
    /* vazio */
  | lista_elementos
  ;

lista_elementos:
    elemento
  | lista_elementos ',' elemento
  ;

elemento:
    definicao_funcao
  | declaracao_variavel_global
  ;

definicao_funcao:
    TK_ID TK_SETA tipo parametros_opt TK_ATRIB bloco_comandos
    ;

tipo:
    TK_DECIMAL
  | TK_INTEIRO
  ;

parametros_opt:
    /* vazio */
  | TK_COM lista_parametros
  ;

lista_parametros:
    parametro
  | lista_parametros ',' parametro
  ;

parametro:
    TK_ID TK_ATRIB tipo
  ;

bloco_comandos:
    '[' lista_comandos_opt ']'
    ;

lista_comandos_opt:
    /* vazio */
  | lista_comandos
  ;

lista_comandos:
    comando_simples
  | lista_comandos comando_simples
  ;

comando_simples:
    bloco_comandos
  | declaracao_variavel_local
  | comando_atribuicao
  | chamada_funcao
  | comando_retorno
  | comando_condicional
  | comando_enquanto
  ;

/* Declaração de variável global (elemento) - SEM inicialização */
declaracao_variavel_global:
    TK_VAR TK_ID TK_ATRIB tipo
    ;

/* Declaração de variável local (comando simples) - COM inicialização opcional */
declaracao_variavel_local:
    TK_VAR TK_ID TK_ATRIB tipo inicializacao_opt
    ;inicializacao_opt:
    /* vazio */
  | TK_COM literal
  ;

literal:
    TK_LI_INTEIRO
  | TK_LI_DECIMAL
  ;

comando_atribuicao:
    TK_ID TK_ATRIB expressao
    ;

chamada_funcao:
    TK_ID '(' argumentos_opt ')'
    ;

argumentos_opt:
    /* vazio */
  | lista_argumentos
  ;

lista_argumentos:
    expressao
  | lista_argumentos ',' expressao
  ;

comando_retorno:
    TK_RETORNA expressao TK_ATRIB tipo
    ;

comando_condicional:
    TK_SE '(' expressao ')' bloco_comandos senao_opt
    ;

senao_opt:
    /* vazio */
  | TK_SENAO bloco_comandos
  ;

comando_enquanto:
    TK_ENQUANTO '(' expressao ')' bloco_comandos
    ;

/* Expressão com precedência explícita para evitar conflitos */
expressao:
    expressao_or
    ;

expressao_or:
    expressao_and
  | expressao_or '|' expressao_and
    ;

expressao_and:
    expressao_eq
  | expressao_and '&' expressao_eq
    ;

expressao_eq:
    expressao_rel
  | expressao_eq TK_OC_EQ expressao_rel
  | expressao_eq TK_OC_NE expressao_rel
    ;

expressao_rel:
    expressao_add
  | expressao_rel '<' expressao_add
  | expressao_rel '>' expressao_add
  | expressao_rel TK_OC_LE expressao_add
  | expressao_rel TK_OC_GE expressao_add
    ;

expressao_add:
    expressao_mul
  | expressao_add '+' expressao_mul
  | expressao_add '-' expressao_mul
    ;

expressao_mul:
    expressao_unaria
  | expressao_mul '*' expressao_unaria
  | expressao_mul '/' expressao_unaria
  | expressao_mul '%' expressao_unaria
    ;

expressao_unaria:
    expressao_primaria
  | '!' expressao_unaria
  | '+' expressao_unaria
  | '-' expressao_unaria
    ;

expressao_primaria:
    chamada_funcao
  | literal
  | TK_ID
  | '(' expressao ')'
    ;

%%

#include <stdio.h>
extern int yylineno;
void yyerror (char const *mensagem) {
    fprintf(stderr, "Erro sintático na linha %d: %s\n", yylineno, mensagem);
}