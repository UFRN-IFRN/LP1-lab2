#include "../../include/qst03/dec2bin.h"

int converterDec2Bin(int dec){
    if (dec >= 2){
        return (10 * converterDec2Bin(dec / 2) + dec % 2); 
    } else {
	    return dec;
	}
}