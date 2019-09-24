/* Realice una función que tome como parámetros un vector y su tamaño y diga si el vector está ordenado crecientemente. */

#include <iostream>
using namespace std;

bool ordenado = false; 
 
void data(int vector[],int numelement){
  cout<<"Digite los elementos del vector:\n";
  for(int i=0; i<numelement; i++){
    cout<<"Elemento "<<i+1<<": "; cin >> vector[i];
  }
}

void OrdenCreciente(int vector[],int numelement){
  for(int i=1; i<numelement; i++){
    if(vector[i]<vector[i-1]){
      return;
    }
  }
  ordenado = true;
}

int main(){
  
  int n; cout<<"Digite el numero de elementos del vector: "; cin >> n;
  int vector[n];
  data(vector,n);
  OrdenCreciente(vector,n);  
  
  if(ordenado){
    cout<<"Los elementos del vector estan ordenados de forma creciente.\n";
  }else cout<<"No estan ordenados de forma creciente.\n";
  
  return 0;
}
