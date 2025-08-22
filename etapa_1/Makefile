# Makefile para Etapa 1 - Análise Léxica
# Projeto de Compiladores

# Variáveis
CC = gcc
FLEX = flex
CFLAGS = -Wall -g -Wno-unused-function
TARGET = etapa1
SOURCES = main.c lex.yy.c
FLEX_SOURCE = scanner.l
HEADERS = tokens.h

# Regra principal
all: $(TARGET)

# Compilação do executável
$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES) -lfl

# Geração do arquivo lex.yy.c a partir do scanner.l
lex.yy.c: $(FLEX_SOURCE)
	$(FLEX) $(FLEX_SOURCE)

# Limpeza dos arquivos gerados
clean:
	rm -f $(TARGET) lex.yy.c

# Regra para criar o arquivo .tgz para entrega
package: clean
	tar cvzf etapa1.tgz *


# Dependências
main.c: $(HEADERS)
lex.yy.c: $(FLEX_SOURCE) $(HEADERS)

.PHONY: all clean package test