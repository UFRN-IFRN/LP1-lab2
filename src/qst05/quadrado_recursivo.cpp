/**
 * @file	quadrado_recursivo.cpp
 * @brief	Código fonte com as funções de calcular o quadado de um número 
 			e imprimiir seus ímpares inferiores
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#include "../../include/qst05/quadrado_recursivo.h"

/**
* @brief Calcula o quadrado de n
* @param n Número a ter seu qudrado calculado
* @return Retorna o valor de N².
*/
int calcularQuadradoRecursivo(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return (2*n-1) + calcularQuadradoRecursivo(n-1);
    }
    
    return 0;
}

/**
* @brief Imprime os ímpares inferiores.
* @param n Número a ter seu quadrado calculado.
*/
void imprimir(int n) {
    
    cout << "Quadrado (" << n << ") => ";
    int rst = 0, rst2 = 0;
    for (int i = 1; i <= n ; i++){
        rst = ( (2*i) - 1);
        rst2 += rst;
        if (rst2 != pow(n,2)) {
            cout << rst << " + ";
        }
        else {
            cout << rst;
        }
    }
}