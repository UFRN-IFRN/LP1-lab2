#include "../../include/qst03/dec2bin.h"

int main(){

	int dec;

	cout << "Digite um número: " << endl;
	cin >> dec;

	cout << "Representaçaõ de " << dec << " na forma binária: " << dec2bin(dec);

	return 0;
}