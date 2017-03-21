#include "../../include/qst02/mdc.h"

int main(){
	int m, n;

	cout << "Digite dois números naturais positivos: " << endl;
	cin >> m >> n;

	cout << "MDC(" << m << ", " << n << ") = " << mdc(m, n) << endl;

	return 0;
}