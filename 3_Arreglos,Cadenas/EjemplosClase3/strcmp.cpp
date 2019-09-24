#include <iostream>
#include <cstring> // strcmp: Compara 2 cadenas
using namespace std;

int main() {
	
	char s1[5] = "hola";
	char s2[5] = "Hola";
	
	int cmp = strcmp(s1, s2); // Resta char por char en codigo ascii (obs: MAYUSCULA != minuscula)
	//int cmp = strcmp("hola", "Hola"); // Otra forma
	
	if (cmp == 0) {
		cout << "s1 es IGUAL que s2" << endl;
	} else if (cmp > 0) {
		cout << "s1 es MAYOR que s2" << endl; // rpta
	} else { // cmp < 0
		cout << "s1 es MENOR que s2" << endl;
	}

	return 0;
}
