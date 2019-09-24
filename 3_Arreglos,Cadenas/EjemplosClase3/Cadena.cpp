#include <iostream>
using namespace std;

int main() {
	
	// Declaracion de Cadena e inicializacion:
	char cad[5] = {'h', 'o', 'l', 'a', '\0'};
	// ...
	
	
	// Vector de cadenas o Matriz de caracteres:
	char v[3][10]; // 3 filas de cadenas de tamaño maximo 9
	
	// Lectura:
	cin >> v[0] >> v[1] >> v[2];
	
	// Escritura:
	cout << v[0] << endl; 
	cout << v[1] << endl; 
	cout << v[2] << endl;

	return 0;
}
