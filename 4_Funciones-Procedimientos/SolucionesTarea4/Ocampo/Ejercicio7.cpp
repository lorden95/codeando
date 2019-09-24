/* Intercambiar el valor de 2 variables utilizando paso de parametros por referencia. */

#include <iostream>
using namespace std;

void Intercambio(int& x,int& y){
  int aux = x;
  x = y;
  y = aux;
}

int main(){
  int a,b;
  cout<<"Digite el valor de a: "; cin >> a;
  cout<<"Digite el valro de b: "; cin >> b;
  
  Intercambio(a,b); 

  cout<<"El nuevo valor de a es: "<<a<<endl;
  cout<<"El nuevo valor de b es: "<<b<<endl;
  
  return 0;
}
