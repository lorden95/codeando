/* Realice una función que tome como parámetros un vector de números enteros y devuelva la suma de sus elementos */

#include <iostream>
using namespace std;

void arrint(int vector[],int tamanioVec){
  cout<<"Digite los elementos del vector:\n";
  for(int i=0; i<tamanioVec; i++){
    cin >> vector[i];
  }
}

void sum_elem_vec(int vector[],int tamanioVec){
  long long suma = 0;
  for(int i=0; i<tamanioVec; i++){
    suma += vector[i];
  }
  cout<<"La suma de los elementos del vector es: "<<suma<<"\n\n";
}

int main(){
  int n; 
  cout<< "Digite el numero de elementos del vector: "; cin >> n;
  int vector[n];
  
  arrint(vector,n);
  sum_elem_vec(vector,n);
  
   
     
  return 0;
}
