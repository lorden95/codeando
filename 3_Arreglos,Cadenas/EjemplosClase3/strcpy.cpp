#include <iostream>
#include <cstring> // strcpy: Copia una cadena dentro de otra
using namespace std;

int main() {
	
	char cad1[6] = "hola";  // 'cad1' debe tener sufiente tamaño para copiar 'cad2'
	char cad2[6] = "adios";
	cout << cad1 << endl;   // "hola"
	cout << cad2 << endl;   // "adios"
	
	strcpy(cad1, cad2);
	//strcpy(cad1, "adios"); // Otra forma
	
	cout << cad1 << endl;    // "adios"
	cout << cad2 << endl;    // "adios"
	
	return 0;
}
