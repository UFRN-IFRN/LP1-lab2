/**
 * @file	main03.cpp
 * @brief	Código fonte com a implementacao da função que converte 
 			decimal para binário
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

 #include "../../include/qst03/dec2bin.h"

/**
*@brief Função principal que recebe os parâmetros pelo terminal
*/
int main(){

	int dec; // Valor decimal

	cout << "Digite um número: " << endl;
	cin >> dec;

	if(dec > 0){
		cout << "Representação de " << dec << " na forma binária: " << converterDec2Bin(dec) << endl;
	} else{
		cout << "Valor inválido.Por favor, digite um número não negativo." << endl;
		main();
	}

	return 0;
}