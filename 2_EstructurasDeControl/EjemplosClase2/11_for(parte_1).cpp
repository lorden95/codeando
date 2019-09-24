#include <iostream>
using namespace std;

int main() {
	
	// Ejemplo 1:
	for (int i = 0; i < 10; i += 2) {
		cout << "i = " << i << endl;
	}
	// 'i' existe dentro del for, no existe fuera del for
	
	/*
	// Equivalente a:
	int i = 0;
	while (i < 10) {
		cout << "i = " << i << endl;
		i += 2;
	}
	// 'i' existe fuera del while
	*/
	
	
	// Ejemplo 2:
	int i;
	for (i = 1; i <= 10; i = i + 1) {
		cout << "i = " << i << endl; // 1, 10
		i = i * 9;
		cout << "i = " << i << endl; // 9, 90
	}
	cout << i << endl; // 91
	
	
	// Ejemplo 3:
	for (int i = 0; i < 5; ++i) {
		if (-1 < 0) {
			if (-2 < 0) {
				int x = 0; // este 'x' existe dentro de 'if (-2 < 0)', fuera de el no existe
				cout << x << endl;
			}
			x = 0; // (error de compilacion) no existe este 'x', no esta declarado
		}
	}
	
	return 0;
}
