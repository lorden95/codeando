#include <iostream>
using namespace std;

int main() {
	
	int a = 1, b = 3;
	int sum = a + b; // Guarda resultado en una variable (Buena practica)
	cout << "a + b = " << sum << endl;
	
	// Se permite algunas operaciones en cout, por ejemplo:
	cout << "a - b = " << a - b << endl; // No guarda resultado en una variable
	
	// Otros usos validos del cout:
	cout << "\n 123 " << " " << endl << "sd " << pow(2, 3) << 123 << endl << endl;
	
	return 0;
}
