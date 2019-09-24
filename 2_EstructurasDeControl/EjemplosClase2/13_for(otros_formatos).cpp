#include <iostream>
using namespace std;

int main() {
	
	for (int i = 0; i < 10; ++i) {
		cout << i << endl;
	}
	
	/*
	// Otros formatos equivalentes:
	for (int i = 0; i != 10; i++) {  // 'i' existe dentro del for
		cout << i << endl;
	}
	
	for (int i = 1; i <= 10; ++i) {
		cout << i - 1 << endl;
	}
	
	int i = 0;                       // 'i' existe fuera del for
	for (; i < 10; i = i + 1) {
		cout << i << endl;
	}
	
	for (int i = 0; ; i += 1) {
		if (i == 10) break; // si no hubiera break, seria bucle infinito
		cout << i << endl;
	}
	
	for (int i = 0; i < 10;) {
		cout << i << endl;
		++i;
	}
	
	for (int i = 0;;) {
		if (i >= 10) break;
		cout << i << endl;
		i++;
	}
	
	int i = 0;
	for (; i < 10;) { // equivale a: while (i < 10)
		cout << i << endl;
		++i;
	}
	
	int i = 0;
	for (;; ++i) {
		if (i == 10) break;
		cout << i << endl;
	}
	
	int i = 0;
	for (;;) {
		if (i == 10) break;
		cout << i << endl;
		++i;
	}
	*/
	
	return 0;
}
