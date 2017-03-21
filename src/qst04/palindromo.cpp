#include "../../include/qst04/palindromo.h"

#include <string>

bool verificarPalindromo(string palavra, int inicio, int fim){

	if(tolower(palavra[inicio]) == tolower(palavra[fim])) {
		return verificarPalindromo(palavra, inicio+1, fim-1);
	} if(fim <= inicio){
		return true;
	} else {
		return false;
	}
}