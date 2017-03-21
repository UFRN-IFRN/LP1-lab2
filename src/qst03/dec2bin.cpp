#include "../../include/qst03/dec2bin.h"

void dec2Bin(int dec) {
		
	if (dec == 1) {
		cout << dec;
	} else {
		dec2Bin(dec/2);
		//cout << dec%2;
	}
	
}
