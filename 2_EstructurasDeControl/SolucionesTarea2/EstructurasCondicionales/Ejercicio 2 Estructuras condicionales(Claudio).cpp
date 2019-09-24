#include <iostream>
using namespace std;

int main() {
	
	int a, b, c;
	cin >> a >> b >> c;
	
	// Hallamos el mayor entre a y b (lo guardamos en la variable z)
	int z;
	if (a >= b) {
		z = a;
	} else {
		z = b;
	}
	
	// Hallamos el mayor entre z y c
	cout << "El mayor nro es: ";
	if (z >= c) {
		cout << z << endl;
	} else {
		cout << c << endl;
	}
	
	
	/*
	// Otra solucion: (pero la idea era utilizar if, else, else if)
	cout << "El mayor nro es: " << max(a, max(b, c)) << endl;
	// max esta en la libreria <algorithm>
	*/
	
	return 0;
}
