/**
 * @file	palindromo.cpp
 * @brief	Código fonte com a implementacao da função que verifica
 			se uma frase ou palavra é um palíndromo
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#include "../../include/qst04/palindromo.h"

#include <string>

/**
 * @brief Calcula a sequência A recursivamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
bool verificarPalindromo(string palavra, int inicio, int fim){

	if(tolower(palavra[inicio]) == tolower(palavra[fim])) {
		return verificarPalindromo(palavra, inicio+1, fim-1);
	} if(fim <= inicio){
		return true;
	} else {
		return false;
	}
}