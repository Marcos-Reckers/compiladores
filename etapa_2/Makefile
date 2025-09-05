# Compilador e ferramentas
CC = gcc
FLEX = flex
BISON = bison
CFLAGS = -Wall -g -Wno-unused-function -Wno-unused-variable
TARGET = etapa2

# Arquivos fonte
FLEX_SOURCE = scanner.l
BISON_SOURCE = parser.y
C_SOURCES = $(wildcard *.c)
GENERATED_C = parser.tab.c lex.yy.c
HEADERS = $(wildcard *.h) parser.tab.h

# Arquivos objeto
OBJECTS = $(patsubst %.c,%.o,$(C_SOURCES) $(GENERATED_C))

# Arquivos de teste
TEST_FILES = $(wildcard testes/teste*.txt)

# Regra principal
all: $(TARGET)

# Compilação do executável
$(TARGET): $(GENERATED_C) $(C_SOURCES)
	$(CC) $(CFLAGS) -o $@ $(filter-out $(GENERATED_C),$(C_SOURCES)) $(GENERATED_C)

# Geração do parser com Bison
parser.tab.c parser.tab.h: $(BISON_SOURCE)
	$(BISON) -d -v $(BISON_SOURCE)

# Geração do scanner com Flex
lex.yy.c: $(FLEX_SOURCE) parser.tab.h
	$(FLEX) $(FLEX_SOURCE)

# Compilação de objetos individuais (se necessário)
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Testes automáticos
test: $(TARGET)
	@echo "=== EXECUTANDO TESTES ==="
	@for test_file in $(TEST_FILES); do \
		echo "Testando $$test_file..."; \
		if ./$(TARGET) < $$test_file; then \
			echo "✓ $$test_file: SUCESSO"; \
		else \
			echo "✗ $$test_file: FALHOU"; \
		fi; \
		echo ""; \
	done

# Verificar conflitos no parser
check-parser: $(BISON_SOURCE)
	$(BISON) -d -v --report=all $(BISON_SOURCE)
	@if [ -f parser.output ]; then \
		echo "=== RELATÓRIO DO PARSER ==="; \
		grep -A5 -B5 "conflict" parser.output || echo "Nenhum conflito encontrado!"; \
	fi

# Debug - mostra tokens do scanner
debug-scanner: lex.yy.c
	@echo "Compilando scanner para debug..."
	@$(CC) -DDEBUG_SCANNER -o debug_scanner lex.yy.c -lfl
	@echo "Execute: echo 'código' | ./debug_scanner"

# Limpeza
clean:
	rm -f $(TARGET) $(GENERATED_C) parser.tab.h parser.output *.o debug_scanner *.tgz

# Empacotamento para entrega
package: clean
	tar cvzf ../$(TARGET).tgz --exclude='.git' --exclude='*.tgz' --exclude='testes' .
	mv ../$(TARGET).tgz .

# Instalar dependências (Ubuntu/Debian)
install-deps:
	sudo apt-get update
	sudo apt-get install -y flex bison gcc make

# Help
help:
	@echo "Alvos disponíveis:"
	@echo "  all          - Compila o projeto"
	@echo "  test         - Executa todos os testes"
	@echo "  check-parser - Verifica conflitos no parser"
	@echo "  debug-scanner- Compila scanner para debug"
	@echo "  clean        - Remove arquivos gerados"
	@echo "  package      - Cria arquivo tar.gz para entrega"
	@echo "  install-deps - Instala dependências"
	@echo "  help         - Mostra esta ajuda"

# Dependências
main.c: parser.tab.h
$(C_SOURCES): $(HEADERS)

# Marcar alvos que não são arquivos
.PHONY: all test check-parser debug-scanner clean package install-deps help

# Não deletar arquivos intermediários importantes
.PRECIOUS: parser.tab.c parser.tab.h lex.yy.c