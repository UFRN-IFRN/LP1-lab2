#include "../../include/qst01/sequencia.h"

int main(){

	char seq, tipo;
	int n = 0;

	cout << "Escolha a sequência a ser resolvida: (A) ou (B)" << endl;
	cin >> seq;
	cout << "Escolha o tipo de função a ser utilizada para resolver a sequência, se recursiva (R) ou iterativa (I)" << endl;
	cin >> tipo;
	cout << "Escolha o valor de N a ser usado no cálculo da sequência" << endl;
	cin >> n;


seqA_rc(n);
seqB_rc(n);
seqA_it(n);
seqB_it(n);

	return 0;
}