#include <iostream>
using namespace std;

char cad[100];

/*
los arreglos como parametro pasan por referencia, osea no hace copia, es decir, cad si se modifica, pero la variable 'x' no, porque no es arreglo (crea una copia)
*/
int longitud_cadena(char cad[100], int x) {
  x = 10;
  cout << "x de la funcion: " << x << endl;
  cad[0] = 'X';
  cout << "1er caracter de cad en la funcion: " << cad[0] << endl;
  
  int len = 0;
  for (int i = 0; i < 100; ++i) {
    if (cad[i] == '\0') {
      break;
    } else {
      len++;
    }
  }
  return len;
}

int longitud_cadena() {
  int len = 0;
  for (int i = 0; i < 100; ++i) {
    if (cad[i] == '\0') {
      break;
    } else {
      len++;
    }
  }
  return len;
}

int main() {
  
  //char cad[100];
  cin >> cad;
  
  int len = longitud_cadena();
  cout << len << '\n';
  
  // ...
  int x = 5;
  len = longitud_cadena(cad, x); // 7
  cout << len << '\n';
  cout << "x del main: " << x << endl; // 5
  cout << "1er caracter de cad en main: " << cad[0] << endl;
  
  return 0;
}
