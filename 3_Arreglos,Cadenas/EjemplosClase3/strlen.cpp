#include <iostream>
#include <cstring> // strlen: Obtiene longitud de una cadena
using namespace std;

int main() {
	
	char s[10] = "hola";
	
	int len = strlen(s);
	//int len = strlen("hola");      // Otra forma
	
	cout << "len = " << len << endl; // 4
	
	return 0;
}
