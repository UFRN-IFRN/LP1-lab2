/**
 * @file	main.cpp
 * @brief	Codigo fonte do programa 
 			sequências descritas no laboratório
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

 #include "../../include/qst01/sequencia.h"

/**
*@brief Função principal que recebe os parâmetros pelo terminal
*/
int main(){

	char seq, tipo;
	int n = 0;

	cout.precision(3); // Pecisão de casas decimais

	cin >> seq >> tipo >> n; //Sequencia, tipo, n, respectivamente

	if(seq == 'A' && tipo == 'R'){
		cout << "O Valor da sequência A para N = " << n << " é " << sequenciaARecursiva(n)
            << " (a versão recursiva foi usada)" << endl;
	}if(seq == 'A' && tipo == 'I'){
		cout << "O Valor da sequência A para N = " << n << " é " << sequenciaAIterativa(n)
            << " (a versão iterativa foi usada)" << endl;
	}if(seq == 'B' && tipo == 'R'){
		cout << "O Valor da sequência B para N = " << n << " é " << sequenciaBRecursiva(n)
            << " (a versão recursiva foi usada)" << endl;
	}if(seq == 'B' && tipo == 'I'){
		cout << "O Valor da sequência B para N = " << n << " é " << sequenciaBIterativa(n)
            << " (a versão iterativa foi usada)" << endl;
	} else {
		cout << "Valor inválido. Por favor, tente novamente." << endl;
		main();
	}

	return 0;
}