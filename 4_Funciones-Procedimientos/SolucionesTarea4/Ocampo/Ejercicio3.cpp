/* Escriba una funcion nombrada funpot() que eleve un numero entero que se le trasmita a una potencia numero entero positivo y despliegue el resultado. El numero entero positivo debera ser el segundo valor transmitido a la funcion. */

#include <iostream>
#include <cstdio>
using namespace std;

void funpot(int x, int y){
  long long potencia=1;
  for(int i=0; i<y; i++){
    potencia *= x; 
  }
  
  printf("El resultado es %lld \n", potencia);
}

int main(){
  int num, exponente;
  cin >> num >> exponente;
  
  funpot(num, exponente);
  
  return 0;
}
