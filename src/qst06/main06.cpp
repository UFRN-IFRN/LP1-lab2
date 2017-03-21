/**
 * @file	main06.cpp
 * @brief	Código fonte do programa
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#include "../../include/qst06/ternaria.h"

/**
*@brief Função principal que recebe o elemento a ser buscado.
*/
int main () {

	int x;

	cin >> x;

    int v[26] = { 2,5,9,11,13,17,22,24,33,38,39,40,45,56,71,99,110,113,132,155,166,203,211,212,230,233 };

    int key = x;

    if (buscaTernaria (v, 0, 25, key ) == 0) {
        cout << "O elemento " << key << " não faz parte do vetor" << endl;
    }
    else {
        cout << "O elemento " << key << " faz parte do vetor" << endl;
    }

    return 0;
}
