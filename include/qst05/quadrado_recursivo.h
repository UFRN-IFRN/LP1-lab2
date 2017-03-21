/**
 * @file	quadrado_recursivo.h
 * @brief	AArquivo cabeçalho com as funções de calcular o quadado de um número 
 			e imprimiir seus ímpares inferiores
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#ifndef QUADRADO_RECURSIVO_H
#define QUADRADO_RECURSIVO_H

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>
using std::pow;

/**
* @brief Calcula o quadrado de n
* @param n Número a ter seu qudrado calculado
* @return Retorna o valor de n ao quadrado.
*/
int calcularQuadradoRecursivo(int n);

/**
* @brief Imprime os ímpares inferiores.
* @param n Número a ter seu quadrado calculado.
*/
void imprimir(int n);


#endif