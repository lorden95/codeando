/* Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le trasmite y despliegue el resultado. La funcion deberá se capaz de elevar al cuadrado números flotantes. */

#include <iostream>
#include <cstdio>
using namespace std;

void al_cuadrado(float x){
  printf("Su cuadrado es %f", x*x);

}


int main(){
  float a; cin >> a;
  al_cuadrado(a);
      
  return 0;
}
