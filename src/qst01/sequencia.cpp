#include "../../include/qst01/sequencia.h"

#include <iostream>

double seqA_rc(int n){
	if(n == 1) {
		return 1;	
	} else {
		return 1/n + seqA_rc(n-1);
	}

}

double seqB_rc(int n) {
	if(n == 1) {
		return 2/4;	
	} else {
		return (((n*n)+1)/(n+3)) + seqA_rc(n-1);
	}
}

double seqA_it(int n){
	double soma = 0;
	for(int i=1; i<=n; ++i){
		soma += 1/n;
	}

	return soma;
}

double seqB_it(int n){
	double soma = 0;
	for (int i=1; i<=n; ++i){
		soma += ((n*n)+1)/(n+3);
	}

	return soma;
} 