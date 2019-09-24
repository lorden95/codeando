#include <iostream>
using namespace std;

int main() {
	
	char ch;
	cin >> ch;
	
	switch (ch) { // En el switch debe ser variable
		// En los 'case' deben ser constantes
		// Si un case es true, ejecuta las instrucciones hasta encontrar un break (asi esté fuera de ese case)
		case 'm':
			// No podemos declarar variables aqui
		case 'M':
			cout << "Masculino" << endl;
			break;
		case 'f':
		case 'F':
			cout << "Femenino" << endl;
			break;
		default: // opcional (depende del problema)
			cout << "opcion invalida" << endl;
			break; // no era necesario en este caso
	}
	
	
	/*
	// Equivalente a:
	if (ch == 'm' || ch == 'M') {
		cout << "masculino" << endl;
	} else if (ch == 'f' || ch == 'F') {
		cout << "femenino" << endl;
	} else {
		cout << "opcion invalida" << endl;
	}
	*/
	
	return 0;
}
