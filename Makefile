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
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/qst01 -I$(INC_DIR)/qst02 -I$(INC_DIR)/qst03 -I$(INC_DIR)/qst04 -I$(INC_DIR)/qst05 -I$(INC_DIR)/qst06

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
$(OBJ_DIR)/main1.o: $(SRC_DIR)/qst01/main01.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto sequencia.o:
$(OBJ_DIR)/sequencia_A.o: $(SRC_DIR)/qst01/sequencia.cpp $(INC_DIR)/qst01/sequencia.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst02:
mdc: $(OBJ_DIR)/main02.o $(OBJ_DIR)/mdc.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main02.o:
$(OBJ_DIR)/main2.o: $(SRC_DIR)/qst02/main02.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto mdc.o:
$(OBJ_DIR)/calculo_MDC.o: $(SRC_DIR)/qst02/mdc.cpp $(INC_DIR)/qst02/mdc.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst03:
dec2bin: $(OBJ_DIR)/main03.o $(OBJ_DIR)/dec2bin.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main03.o:
$(OBJ_DIR)/main3.o: $(SRC_DIR)/qst03/main03.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto dec2bin.o:
$(OBJ_DIR)/conversao_binaria.o: $(SRC_DIR)/qst03/dec2bin.cpp $(INC_DIR)/qst03/dec2bin.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do executavel qst04:
palindromo: $(OBJ_DIR)/main04.o $(OBJ_DIR)/palindromo.o

	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

# Alvo para a construcao do objeto main04.o:
$(OBJ_DIR)/main4.o: $(SRC_DIR)/qst04/main04.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo para a construcao do objeto palindromo.o:
$(OBJ_DIR)/palindromo.o: $(SRC_DIR)/qst04/palindromo.cpp $(INC_DIR)/qst04/palindromo.h
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
