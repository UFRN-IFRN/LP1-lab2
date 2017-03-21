#include "../../include/qst03/dec2bin.h"

int main(){

	int dec;

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