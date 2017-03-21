/**
 * @file	main04.cpp
 * @brief	Código fonte do programa
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

#include "../../include/qst04/palindromo.h"

/**
*@brief Função principal que recebe os parâmetros pelo terminal
*/
int main(){

	string palavra;

	cout << "Digite uma palavra: " << endl;
	getline(cin, palavra);

	int tam = palavra.length();
	
	if(verificarPalindromo(palavra, 0, tam-1) == true){
		cout << "'" << palavra << "'" << " é um palíndromo" << endl;
    } else {
    	cout << "'" << palavra << "'" << " não é um palíndromo" << endl;
    }

    return 0;

}