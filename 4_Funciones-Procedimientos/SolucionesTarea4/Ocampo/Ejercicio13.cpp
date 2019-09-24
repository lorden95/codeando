/* Realiza una función que tome como parámetros un vector de números y su tamanio y cambie el signo de los elementos del vector. */

#include <iostream>
using namespace std;

void data(int vector[],int numelement){
  cout<<"Ahora digite los elementos del vector:\n";
  for(int i=0; i<numelement; i++){
    cin >> vector[i];
  }
}
void cambiarSigno(int vector[],int numelement){
  for(int i=0; i<numelement; i++){
    vector[i] *= (-1);
  }
}
void mostrar(int vector[],int numelement){
  cout<<"El nuevo vector es:\n";
  cout<<'{';
  for(int i=0; i<numelement; i++){
    cout<<vector[i];
    if(i!=numelement-1){
      cout<<' ';
    }
  }
  cout<<'}';
}

int main(){
  int n; cout<< "Digite el numero de elementos del vector: "; cin >> n; cout<<"\n";
  int vector[n];
  
  data(vector,n);
  cambiarSigno(vector,n);
  mostrar(vector,n);
  
  return 0;
}
