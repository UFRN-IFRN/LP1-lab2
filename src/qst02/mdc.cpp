/**
 * @file	mdc.cpp
 * @brief	Codigo fonte com a implementacao dd função que calcula o MDC
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

 #include "../../include/qst02/mdc.h"

/**
 * @brief Calcula o mdc
 * @param m Divisor
 * @param n Dividendo
 * @return MDC
 */
int mdc(int m, int n){
	int resto = m % n;
	if (resto == 0){
		return n;
	} else {
		return mdc(m, resto);
	}
}