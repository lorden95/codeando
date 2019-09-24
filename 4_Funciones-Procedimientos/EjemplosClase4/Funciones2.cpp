#include <iostream>
#include <cstring>
using namespace std;

int strlen(char cadena[]) {
    int i = 0;	
    while (cadena[i] != '\0') {
        i += 1;
    }
    cout << "jaja" << endl;
    return i;
}

int main() {
    char s[] = "Hola";
    cout << strlen(s) << endl;
    // no le hace caso a strlen de cstring
    // prioriza a la funcion que creaste
    return 0;
}
