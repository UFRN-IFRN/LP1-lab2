#include "../../include/qst04/palindromo.h"

int main(){

	string palavra;

	cout << "Digite uma palavra: " << endl;
	cin >> palavra;

	int tam = palavra.length();
	
	if(verificarPalindromo(palavra, 0, tam-1) == true){
		cout << "'" << palavra << "'" << " é um palíndromo" << endl;
    } else {
    	cout << "'" << palavra << "'" << " não é um palíndromo" << endl;
    }

    return 0;

}