#include <iostream>
using namespace std;

int main() {
	
	// Ejemplo 4:
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < i; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	/*Imprime:
		
		* 
		**
		***
	*/
	
	/*
	// Equivale a:
	int i = 0;
	while (i < 4) {
		int j = 0;
		while (j < i) {
			cout << "*";
			++j;
		}
		cout << endl;
		++i;
	}
	*/
	
	
	// Ejemplo 5:
	// se puede crear mas variables dentro del for separadas por comas
	int d = 2;
	for (int i = 1, j = 123, z; i < 10; i *= d) {
		cout << i << endl;
		cout << j << endl;
	}
	
	
	// Ejemplo 6:
	for (int i = 9; i >= 0; --i) {
		cout << i << endl;
	}
	// Imprime 9, 8, ..., 0
	
	return 0;
}
