#include <iostream>
#include <cstdio> // gets
using namespace std;

int main() {

	// cin: Lee hasta encuentrar un espacio o un fin de linea
	cin >> cad;
	cout << cad << endl;
	
	// gets: Lee hasta encontrar el fin de linea (linea completa)
	gets(cad); // esta obsoleto, utilizar fgets
	cout << cad << endl;
	
	return 0;
}
