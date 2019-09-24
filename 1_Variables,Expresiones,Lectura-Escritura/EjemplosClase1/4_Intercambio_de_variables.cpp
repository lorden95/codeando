#include <iostream>
#include <algorithm> // swap
using namespace std;

int main() {

	// Forma incorrecta:
	int a = 10, b = 30;
	a = b; // b = 30 => a = 30 
	b = a; // a = 30 => b = 30
	cout << "Con la forma incorrecta:" << endl;
	cout << "a = " << a << endl; // 30
	cout << "b = " << b << endl; // 30
	
	
	// Forma correcta (usando una variable auxiliar):
	int p = 10, q = 30;
	int aux = p; // p = 10   => aux = 10
	p = q;       // q = 30   => p = 30
	q = aux;     // aux = 10 => q = 10
	cout << "p = " << p << endl; // 30
	cout << "q = " << q << endl; // 10
	
	
	// Otra forma correcta (usando la funcion swap):
	int x = 10, y = 30;
	swap(x, y);
	cout << "x = " << x << endl; // 30
	cout << "y = " << y << endl; // 10
	
	return 0;
}
