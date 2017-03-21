#include "../../include/qst01/sequencia.h"

int main(){

	char seq, tipo;
	int n = 0;

	cout.precision(3);

	cin >> seq >> tipo >> n;
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