#include <iostream>
using namespace std;

// Variable global: Por defecto incializa todos con cero
//int v[1000], x;

int main() {
	
	int v[1000000]; // tamanio maximo permitido en local: 10^6
	for (int i = 0; i < 100; ++i) {
		v[i] = 0;
	}
	// Llena el vector v con 0's, desde la posicion 0 hasta el 99
	
	return 0;
}
