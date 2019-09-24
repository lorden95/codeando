/* Realiza una función que tome como parámetros un vector de enteros y su tamanio e imprima un vector con los elementos impares del vector recibido. */

#include <iostream>
using namespace std;

void data(int vector[],int numelement){
  cout<<"Ahora digite los elementos del vector:\n";
  for(int i=0; i<numelement; i++){
    cin >> vector[i];
  }
}

void vimpar(int vector[],int numelement){
  cout<<"El nuevo vector es:\n";
  cout<<'{';
  for(int i=0; i<numelement; i++){
    if(vector[i]%2 != 0){
       cout<<vector[i];
      if(i!=numelement-1){
      cout<<';';
      }
    }
  }
  cout<<'}';
}

int main(){
  int n; cout<< "Digite el numero de elementos del vector: "; cin >> n; cout<<"\n";
  int vector[n];
  
  data(vector,n);
  vimpar(vector,n);
     
  return 0;
}
