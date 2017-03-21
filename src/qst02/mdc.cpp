#include "../../include/qst02/mdc.h"

int mdc(int m, int n){
	int resto = m % n;
	if (resto == 0){
		return n;
	} else {
		mdc(m, m/n);
	}
}