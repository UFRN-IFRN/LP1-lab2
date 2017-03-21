/**
 * @file	ternaria.cpp
 * @brief	Código fonte com a implementacao do algoritmo de busca ternária
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#include "../../include/qst06/ternaria.h"

/**
* @brief Busca o elemento no vetor
* @param v Vetor.
* @param inicio Índice do inicio do vetor.
* @param fim Índice do fim do vetor.
* @param x Elemento a ser procurado.
* @return Retorna o numero (binário).
*/

bool buscaTernaria(int *V, int ini, int fim, int x) {

    if (ini > fim) {
        return false;
    }

    int t1 = ini + (fim - ini)/3;
    int t2 = ini + ((fim - ini)/3)*2;

    if (V[t1] == x) {
        return true;
    } else if (V[t2] == x) {
        return true;
    } else if ( x < V[t1] ) {
        return buscaTernaria( V, ini , t1 - 1 , x);
    } else if ( x < V[t2] ) {
        return buscaTernaria( V, t1 + 1 , t2 - 1 , x);
    } else if ( x > V[t2] ) {
        return buscaTernaria( V, t2 + 1 , fim , x);
    } 

}