#include <iostream>
using namespace std;

int main() {
	
	booleano = !proposicion                 // o en vez de '!'  se puede con 'not'
	booleano = proposicion1 || proposicion2 // o en vez de '||' se puede con 'or'
	booleano = proposicion1 && proposicion2 // o en vez de '&&' se puede con 'and'
	booleano = proposicion1 ^  proposicion2 // o en vez de '^'  se puede con 'xor'
	
	// Ejemplo:
	int nota = 21;
	bool existe = false;
	
	if (not existe) { // not existe == true, entonces entra
		cout << "Nota invalida" << endl; // rpta
	} else {
		cout << "Ok" << endl;
	}
	
	
	// A nivel de bits (conjunto de 'proposiciones'):
	numero = ~numero
	numero = numero1 | numero2 // o en vez de '|' se puede con 'bitor'
	numero = numero1 & numero2 // o en vez de '&' se puede con 'bitand'
	numero = numero1 ^ numero2 // o en vez de '^' se puede con 'xor'
	
	return 0;
}
