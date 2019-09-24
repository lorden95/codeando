#include <iostream>
using namespace std;

// ¿Que valor imprime cada codigo?

int main() {
	
	// Codigo sin llaves:
	int a = 3, b = 1;
	if (a >= 2)
		if (b >= 4)
			b = a;
	else // este else pertene a 'if (b >= 4)'
		b = 2 * a;
	cout << "b = " << b << endl; // b == 6 (cout esta fuera del if)
	
	
	// Codigo con llaves:
	a = 3, b = 1;
	if (a >= 2) {
		if (b >= 4) {
			b = a;
		} // no hay else ni nada debajo que cambie el valor de 'b'
	} else {
		b = 2 * a;
	}
	cout << "b = " << b << endl; // b == 1
	
	return 0;
}
