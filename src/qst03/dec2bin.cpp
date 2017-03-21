/**
 * @file	dec2bin.cpp
 * @brief	Código fonte com a implementacao da função que converte 
 			decimal para binário
 * @author	Bianca Santiago (bianca.santiago72@gmail.com)
 * @since	18/03/2017
 * @date	20/03/2017
 */

 #include "../../include/qst03/dec2bin.h"

/**
 * @brief Converte decimal para binário
 * @param dec Valor em decimal
 * @return Valor binário do decimal informado
 */
int converterDec2Bin(int dec){
    if (dec >= 2){
        return (10 * converterDec2Bin(dec / 2) + dec % 2); 
    } else {
	    return dec;
	}
}