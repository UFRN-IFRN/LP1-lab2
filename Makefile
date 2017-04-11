#Makefile for "laboratório 2" C++ application
#Created by Bianca Santiago 20/03/2017

RM = rm -rf

# Compilador:
CC = g++

# Variaveis para os subdiretorios:

INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc

# Opcoes de compilacao:
CFLAGS = -Wall -I. -I$(INC_DIR)

# Assegura que os alvos não sejam confundidos com os arquivos de mesmo nome:
.PHONY: all clean distclean doxy

# Define o alvo para a compilação completa:
all: sequencia mdc dec2bin palindromo quadrado_iterativo quadrado_recursivo ternaria
debug: CFLAGS += -g -O0
debug: sequencia mdc dec2bin palindromo quadrado_iterativo quadrado_recursivo ternaria

# Alvo para a construcao do executavel qst01:
sequencia: $(OBJ_DIR)/main01.o $(OBJ_DIR)/sequencia.o
	
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main01.o:
$(OBJ_DIR)/main01.o: $(SRC_DIR)/qst01/main01.cpp 
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto sequencia.o:
$(OBJ_DIR)/sequencia.o: $(SRC_DIR)/qst01/sequencia.cpp $(INC_DIR)/qst01/sequencia.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst02:
mdc: $(OBJ_DIR)/main02.o $(OBJ_DIR)/mdc.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main02.o:
$(OBJ_DIR)/main02.o: $(SRC_DIR)/qst02/main02.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto mdc.o:
$(OBJ_DIR)/mdc.o: $(SRC_DIR)/qst02/mdc.cpp $(INC_DIR)/qst02/mdc.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst03:
dec2bin: $(OBJ_DIR)/main03.o $(OBJ_DIR)/dec2bin.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main03.o:
$(OBJ_DIR)/main03.o: $(SRC_DIR)/qst03/main03.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto dec2bin.o:
$(OBJ_DIR)/dec2bin.o: $(SRC_DIR)/qst03/dec2bin.cpp $(INC_DIR)/qst03/dec2bin.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst04:
palindromo: $(OBJ_DIR)/main04.o $(OBJ_DIR)/palindromo.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main04.o:
$(OBJ_DIR)/main04.o: $(SRC_DIR)/qst04/main04.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto palindromo.o:
$(OBJ_DIR)/palindromo.o: $(SRC_DIR)/qst04/palindromo.cpp $(INC_DIR)/qst04/palindromo.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst05 (iterartivo):
quadrado_iterativo: $(OBJ_DIR)/main05-it.o $(OBJ_DIR)/quadrado_iterativo.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main05-it.o:
$(OBJ_DIR)/main05-it.o: $(SRC_DIR)/qst05/main05-it.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto quadrado_iterativo.o:
$(OBJ_DIR)/quadrado_iterativo.o: $(SRC_DIR)/qst05/quadrado_iterativo.cpp $(INC_DIR)/qst05/quadrado_iterativo.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst05 (recursivo):
quadrado_recursivo: $(OBJ_DIR)/main05-rc.o $(OBJ_DIR)/quadrado_recursivo.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main05-rc.o:
$(OBJ_DIR)/main05-rc.o: $(SRC_DIR)/qst05/main05-rc.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto quadrado_recursivo.o:
$(OBJ_DIR)/quadrado_recursivo.o: $(SRC_DIR)/qst05/quadrado_recursivo.cpp $(INC_DIR)/qst05/quadrado_recursivo.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst06:
ternaria: $(OBJ_DIR)/main06.o $(OBJ_DIR)/ternaria.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main06.o:
$(OBJ_DIR)/main06.o: $(SRC_DIR)/qst06/main06.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto ternaria.o:
$(OBJ_DIR)/ternaria.o: $(SRC_DIR)/qst06/ternaria.cpp $(INC_DIR)/qst06/ternaria.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a geração automatica de documentacao usando o Doxygen:
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile
doxyg:
	doxygen -g

# Alvo usado para limpar os arquivos temporarios (objeto):
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
