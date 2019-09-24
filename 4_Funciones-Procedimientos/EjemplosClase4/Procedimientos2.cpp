#include <iostream>
using namespace std;

char saludo[5] = "hola";

/* Declaramos las funciones antes de usarlas*/
void saludar() { 
    cout << saludo << endl; 
}

void saludar(int veces) {
    for (int i = 0; i < veces; i++) {
        saludar(); /*No enviamos ningún parámetro*/
        // si o si saludar() debe estar definido antes de saludar(int)
    }
}

int main() {
    saludar();
    saludar(3);
    return 0;
}
