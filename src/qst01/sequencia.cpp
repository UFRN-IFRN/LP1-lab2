/**
 * @file	sequencia.cpp
 * @brief	Codigo fonte com a implementacao de funcoes que calculam as 
 			sequências descritas no laboratório
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#include "../../include/qst01/sequencia.h"

/**
 * @brief Calcula a sequência A recursivamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
float sequenciaARecursiva(float n){
	if(n == 1) {
		return 1;	
	} else {
		return 1/n + sequenciaARecursiva(n-1);
	}

}

/**
 * @brief Calcula a sequência A iterativamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
float sequenciaAIterativa(float n){
	float soma = 0;
	
	for(float i = 1; i <= n; ++i){
		soma += 1/i;
	}

	return soma;
}

/**
 * @brief Calcula a sequência B recursivamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
float sequenciaBRecursiva(float n){
	if(n == 0) {
		return 0;	
	} else {
		return ((pow(n, 2) + 1) / (n + 3)) + sequenciaBRecursiva(n-1);
	}
}

/**
 * @brief Calcula a sequência B iterativamente
 * @param n Variável da sequência
 * @return Valor de n para a sequência
 */
float sequenciaBIterativa(float n){
	float soma = 0, aux = 1;
	
	for (float i =1; i <= n; ++i){
		soma += (pow(aux, 2) + 1) / (i + 3);
		aux++;
	}

	return soma;
} 