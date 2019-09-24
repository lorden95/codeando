#include <iostream>
using namespace std;

int main() {
	
	// Ejemplo 1:
	int nro;
	while (true) {
		cin >> nro;
		if (nro <= 0) {
			break; // finaliza while al leer un negativo o cero
		}
		cout << nro << endl; // imprime solo positivos
	}
	
	
	// Ejemplo 2:
	int cont = 0;
	while (true) {
		cout << "ctm 1" << endl; // imprime 11 veces
		
		if (cont == 10)
			break; // sale del while, ya no ejecuta lo que sigue despues
		
		cout << "ctm 2" << endl; // imprime 10 veces
		cont++;
	}
	cout << cont << endl; // 10 y no 11
	
	// Ejemplo 3:
	int x = 0, y = 0;
	while (y < 10) {
		y++;
		if (y == 3) 
			x++;
		break;
	}
	cout << "x = " << x << endl; // 0
	cout << "y = " << y << endl; // 1
	
	return 0;
}
