#include <iostream>
using namespace std;

int main() {
	
	int nro;
	while (true) {
		cin >> nro;
		if (nro <= 0) {
			cout << "nro invalido, introduzca nuevo nro:" << endl;
			continue; // va al inicio del while, ignora lo que sigue
		}
		cout << "el nro es: " << nro << endl; // imprime solo positivos
	}
	// bucle infinito
	
	return 0;
}
