#include <iostream>
using namespace std;

int x; // x = 0, por defecto (solo variables globales)
int v[10000000]; // var. global: puedo declarar tamanio mas 10^6, max 10^8

int my_function(int param) {
  int x; // valor basura
}

int main() {

  int v[1000000]; // var. local: tamanio maximo permitido 10^6
  int x; // valor basura
  
  return 0;
}
