#include "../../include/qst04/palindromo.h"

#include <iostream>
#include <string>


bool pali(char* palavra, int inicio, int fim){
		
	if (inicio <= fim) {
		if (palavra[inicio] == palavra[fim]) {
			pali (palavra, inicio+1, fim-1);
		} else {
			return false;
		}
	}

	return true;
	
}


//	Lembrar de quando construir o main() usar a função toLowerCase para deixar tudo minusculo, e se quiser 
//usar em frase usar a função para retirar os espaços se quiser testar uma frase.