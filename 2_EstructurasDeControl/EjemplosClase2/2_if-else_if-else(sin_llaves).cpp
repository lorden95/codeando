#include <iostream>
using namespace std;

int main() {
	
	int nota;
	cin >> nota;
	
	// Ejemplo 1:
	if (nota < 0 || nota > 20) // Prescindiendo uso de llaves (ejecuta solo 1 instruccion)
		cout << "Nota invalida" << endl;
	else if (nota < 10)
		cout << "Desaprobado" << endl;
	else {                     // Obligado uso de llaves (quiero mas de 1 instruccion)
		cout << "Aprobado!!" << endl;
		cout << "Aprobado!!" << endl;
		cout << "Aprobado!!" << endl;
	}
	
	// Ejemplo 2:
	if (nota < 10) 
		cout << "desaprobado" << endl;
		cout << " jiji" << endl; // esta fuera del if
	
	// Ejemplo 3:
	// Si deseo mas de 1 instruccion dentro de un if  pero sin llaves,
	// enotnces usamos ',' en vez de ';', excepto para el ultimo ';'
	if (nota < 10)
		cout << "desaprobado" << endl, cout << " jiji" << endl, int GG; // equivale a 1 instruccion
	
	return 0;
}
