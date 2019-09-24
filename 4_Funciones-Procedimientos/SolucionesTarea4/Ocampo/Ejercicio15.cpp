/* Desarrollar una función que determine si una matriz es simétrica o no. */

#include <iostream>
using namespace std;

int matriz[10000][10000];
int nfil, ncol; 

void data(int matriz[][10000],int n,int m){
  cout<<"Digite los elementos de la matriz:\n";
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> matriz[i][j]; 
    }
  }
}

bool matcuadrada(int n,int m){
  bool esCuadrada = false; 
  if (n != m){
    return esCuadrada;
  }else{
     esCuadrada = true;
  }
  return esCuadrada; 
}
  
void esSimetrica(int matriz[][10000],int n,int m){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(matriz[i][j] != matriz[j][i]){
          cout<<"No es simetrica.";
          return;
      }
    }
  }
  cout<<"Es simetrica.";
}
  
int main(){
  
  cout<<"Introduzca numero de filas de la matriz: ";
  cin >> nfil;
  cout<<"Introduzca numero de columnas de la matriz: "; 
  cin >> ncol;
  
  if(matcuadrada(nfil,ncol)){
    data(matriz,nfil,ncol);
    esSimetrica(matriz,nfil,ncol);
  }else{
    cout<<"No es simetrica.";
  }
  
     
  return 0;
}
