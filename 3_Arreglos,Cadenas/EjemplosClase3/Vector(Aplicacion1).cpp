#include <iostream>
using namespace std;

// Contar la cantidad de aprobados en una lista de 5 notas

int main() {
	
	int notas[5];
	for (int i = 0; i < 5; ++i) {
		cin >> notas[i];
	}
	
	int aprobados = 0;
	for (int i = 0; i < 5; ++i) {
		if (notas[i] < 10) {
			continue;
		}
		aprobados++;
	}
	
	/*
	// otra forma:
	int aprobados = 0;
	for (int i = 0; i < 5; ++i) {
		if (notas[i] >= 10) {
			aprobados++;
		}
	}
	*/
	
	cout << "cantidad de aprobados: " << aprobados << endl;
	
	return 0;
}
