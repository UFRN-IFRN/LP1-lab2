#include "../../include/qst02/mdc.h"

int main(){
	int n, m;

	cout << "Digite dois números naturais positivos: " << endl;
	cin >> m;
	cin >> n;

	cout << "MDC(" << m << ", " << n << ") = " << mdc(m, n) << endl;

	return 0;
}