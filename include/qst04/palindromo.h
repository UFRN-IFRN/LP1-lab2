/**
 * @file	palindromo.h
 * @brief	Arquivo cabeçalho com a implementacao da função que verifica
 			se uma frase ou palavra é um palíndromo
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#ifndef PALINDROMO_H
#define PALINDROMO_H

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstring>
using std::string;

/**
 * @brief Calcula a sequência A recursivamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
bool verificarPalindromo(string palavra, int inicio, int fim);

#endif