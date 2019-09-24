#include <iostream>
using namespace std;

int main() {
	
	int nota;
	cin >> nota;
	
	if (nota < 0 || nota > 20) {
		cout << "Nota invalida" << endl;
	} else if (nota < 10) {
		cout << "Desaprobado" << endl;
	} else { // 10 <= nota && nota <= 20
		cout << "Aprobado" << endl;
	}
	// En este caso, 'nota' cumplira SI O SI y SOLO una de las condiciones
	// else if, else: Son opcionales (depende del problema)
	
	
	/*
	// Los espacios, tabulaciones, fin de linea son de uso estetico (estilos)
	// Ejemplo (equivale al codigo anterior):
	if(nota < 0 || nota > 20)
	{
	cout << "Nota invalida" << endl;
	} else if (nota < 10)   {
		cout << "Desaprobado" << endl;
	}
	else{ cout << "Aprobado";    cout << endl; }
	*/
	
	return 0;
}
