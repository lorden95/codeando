#include <iostream>
using namespace std;

int main() {
	
	while (true) { // o en vez de 'true', cualquier nro entero diferente de cero
		/* hacer algo */
		if (condicion) break; // detiene el bucle infinito
		/* hacer algo */
	}
	
	for (;;) {
		/* hacer algo */
		if (condicion) break; // detiene el bucle infinito
		/* hacer algo */
	}
	
	return 0;
}
