#include "../../include/qst01/sequencia.h"

float sequenciaARecursiva(float n){
	if(n == 1) {
		return 1;	
	} else {
		return 1/n + sequenciaARecursiva(n-1);
	}

}

float sequenciaAIterativa(float n){
	float soma = 0;
	
	for(float i = 1; i <= n; ++i){
		soma += 1/i;
	}

	return soma;
}

float sequenciaBRecursiva(float n){
	if(n == 0) {
		return 0;	
	} else {
		return ((pow(n, 2) + 1) / (n + 3)) + sequenciaBRecursiva(n-1);
	}
}

float sequenciaBIterativa(float n){

	float soma = 0, aux = 1;
	
	for (float i =1; i <= n; ++i){
		soma += (pow(aux, 2) + 1) / (i + 3);
		aux++;
	}

	return soma;
} 