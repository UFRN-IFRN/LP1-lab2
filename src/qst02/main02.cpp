#include "../../include/qst02/mdc.h"

int main(){
	int m, n;

		cout << "Digite dois números naturais positivos: " << endl;
		cin >> m >> n;

	if (n > 0){
		cout << "MDC(" << m << ", " << n << ") = " << mdc(m, n) << endl;
	} else {
		cout << "Valor(es) inválido(s). Por favor, digite valores positivos." << endl;
		main();
	}
	return 0;
}