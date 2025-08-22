%{
#include "tokens.h"
%}

%option yylineno
%option noyywrap

%%

"var"           { return TK_VAR; }
"tipo"          { return TK_TIPO; }
"se"            { return TK_SE; }
"senao"         { return TK_SENAO; }
"enquanto"      { return TK_ENQUANTO; }
"retorna"       { return TK_RETORNA; }
"inteiro"       { return TK_INTEIRO; }
"decimal"       { return TK_DECIMAL; }
"com"           { return TK_COM; }

":="            { return TK_ATRIB; }
"->"            { return TK_SETA; }
"<="            { return TK_OC_LE; }
">="            { return TK_OC_GE; }
"=="            { return TK_OC_EQ; }
"!="            { return TK_OC_NE; }

[0-9]+          { return TK_LI_INTEIRO; }
[0-9]*\.[0-9]+  { return TK_LI_DECIMAL; }
[0-9]+\.        { return TK_LI_DECIMAL; }
[a-z_][a-z_0-9]* { return TK_ID; }

[-!*/%<>()\[\]=,;+&|] { return yytext[0]; }

[ \t\n]+        { /* ignora brancos */ }
\/\/.*          { /* ignora comentarios */ }

.               { return TK_ER; }

%%

int get_line_number(void) {
    return yylineno;
}
