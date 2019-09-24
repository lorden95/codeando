#include <iostream>
#include <cstring> // strcat: Concatena(unir) 2 cadenas
using namespace std;

int main() {
	
	char a[11] = "hola "; // 'a' debe tener suficiente tanaño para anexar 'b'
	char b[6] = "mundo";
	
	strcat(a, b);         // Anexa 'b' al final de 'a'
	//strcat(a, "mundo"); // Otra forma
	
	cout << a << endl;    // "hola mundo"
	cout << b << endl;    // "mundo"
	
	return 0;
}
