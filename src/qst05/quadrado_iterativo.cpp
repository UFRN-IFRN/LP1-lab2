/**
 * @file	quadrado_iterativo.cpp
 * @brief	Código fonte 
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#include "../../include/qst05/quadrado_iterativo.h"

/**
* @brief Calcula o quadrado de n
* @param n Número a ter seu qudrado calculado
*/
void calcularQuadradoIterativo(int n){
	cout << "Quadrado (" << n << ") => ";

    int rst = 0, rst2 = 0;
    
    for (int i = 1; i <= n ; i++) {

        rst = ( (2*i) - 1);
        rst2 += rst;
       
        if (rst2 == pow(n,2)) {
            cout << result;
            cout << " = " << rst2 << endl;
        }
        
        else if (rst2 != pow(n,2)) {
            cout << rst << " + ";
        }

    }
}