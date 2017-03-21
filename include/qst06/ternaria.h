/**
 * @file	ternaria.h
 * @brief	Arquivo cabeçalho com a implementacao do algoritmo de busca ternária
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#ifndef TERNARIA_H
#define TERNARIA_H

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstdlib>

/**
* @brief Busca o elemento no vetor.
* @param v Vetor.
* @param inicio Índice do inicio do vetor.
* @param fim Índice do fim do vetor.
* @param x Elemento a ser procurado.
* @return Retorna o numero (binário).
*/
bool buscaTernaria(int *V, int left, int right, int target);
#endif