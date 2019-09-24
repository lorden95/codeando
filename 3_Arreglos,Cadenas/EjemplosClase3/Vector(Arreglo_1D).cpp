#include <iostream>
using namespace std;

int main() {
	
	// Declaracion e inicializacion:
	int v[5] = {-1, 5, 9, -2, 10}; // otras declaraciones permitidas: v[n], v[4*n + 5]
	//v = {-1, 5, 9, -2, 10} // no permitido despues de la declaracion (error de compilacion)
	
	cout << v[2] << endl; // 9
	v[2]++;
	cout << v[2] << endl; // 10
	
	return 0;
}
