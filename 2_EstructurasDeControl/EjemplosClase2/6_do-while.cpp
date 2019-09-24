#include <iostream>
using namespace std;

int main() {
	
	int nro;
	do {
		cin >> nro; // lectura
	} while (nro <= 0); // repetir/hacer(lee) mientras sea negativo o cero
	// otra interpretacion: repetir/hacer(lee) hasta que sea positivo
	
	cout << "el nro es: " << nro << endl; // imprime 1 positivo
	
	return 0;
}
