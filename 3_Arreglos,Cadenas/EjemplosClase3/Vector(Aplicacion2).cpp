#include <iostream>
using namespace std;

int main() {
	
	int notas[5];
	for (int i = 0; i < 5; ++i) {
		cin >> notas[i];
	}
	
	bool existe = false;
	for (int i = 0; i < 5; ++i) {
		if (notas[i] == 20) {
			existe = true;
			break; // no es necesario, pero puede optimizar
		}
	}
	
	if (!existe) {
		cout << "no hay nota, :(" << endl;
	} else {
		cout << "alguien 20!!" << endl;
	}
	
	/*
	// Otra forma:
	bool existe = false;
	for (int i = 0; i < 5; ++i) {
		if (notas[i] == 20) {
			cout << "alguien 20!!" << endl;
			existe = true;
			break;
		}
	}
	
	if (!existe) {
	  cout << "no hay nota, :(" << endl;
	}
	*/
	
	return 0;
}
