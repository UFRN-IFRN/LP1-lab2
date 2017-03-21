/**
 * @file	main2.cpp
 * @brief	Codigo fonte do programa
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

 #include "../../include/qst02/mdc.h"

/**
*@brief Função principal que recebe os parâmetros pelo terminal
*/
int main(){
	int m, n;

		cout << "Digite dois números naturais positivos: " << endl;
		cin >> m >> n;

	if (n > 0){
		cout << "MDC(" << m << ", " << n << ") = " << mdc(m, n) << endl;
	} else {
		cout << "Valor(es) inválido(s). Por favor, digite valores positivos." << endl;
		main();
	}
	return 0;
}