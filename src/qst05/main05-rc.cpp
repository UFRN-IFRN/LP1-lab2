/**
 * @file	main05-rc.cpp
 * @brief	Código fonte do programa
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#include "../../include/qst05/quadrado_recursivo.h"

 /**
*@brief Função principal que recebe o elemento a ser buscado.
*/
int main () {
	int n;

	cin >> n;
    
    imprimir(n);
    cout << " = " << calcularQuadradoRecursivo(n) << endl;

    return 0;
}