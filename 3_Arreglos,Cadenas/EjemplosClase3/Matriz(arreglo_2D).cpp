#include <iostream>
using namespace std;

int main() {
	
	/*
	// Declaracion e inicializacion:
	int M[2][3] = {{-2, 4, 8}, {3, -1, 5}}; // matriz de 2 filas y 3 columnas
	*/
	
	// Declaracion:
	int M[2][3];
	
	// Lectura:
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> M[i][j];
		}
	}
	
	// Escritura:
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			// if (j > 0) cout << " ";
			cout << M[i][j]; // cout << M[i][j] << " ";
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}
