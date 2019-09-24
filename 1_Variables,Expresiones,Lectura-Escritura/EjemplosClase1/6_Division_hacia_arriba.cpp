// Division redondeado al entero mas cercano hacia arriba:
#include <iostream>
using namespace std;

int main() {
	
	int a = 6, b = 4;
	
	// Forma 1 (usando el residuo):
	bool restoMayorAcero = a % b > 0;
	cout << "(a / b) + (a % b > 0) = " << (a / b) + restoMayorAcero << endl;
	cout << "(a / b) + (a % b > 0) = " << (a / b) +   (a % b > 0)   << endl; // equivale a lo anterior
	
	
	// Forma 2 (formula):
	cout << "(a + b - 1) / b   = " <<  (a + b - 1) / b  << endl;
	cout << "((a - 1) / b) + 1 = " << ((a - 1) / b) + 1 << endl; // equivale a lo anterior
	
	return 0;
}
