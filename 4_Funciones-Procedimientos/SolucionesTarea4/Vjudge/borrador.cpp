#include <iostream>
using namespace std;

int grados(int n, int c){
  
  if(n%9==0){
   if(n>9){
    c++;
    grados(n/9);
   }else(n==0 or n==9){
    c++;
    return c;
   }
  }else return 0;
}

int main(){
  int n,aux,contador;

    do{
    cin >> n;
  if(n == 0){
    return 0;
  }
    contador = 0;
    aux = n;
    cout<<n<<" is "<<impresion<<"a multiple of 9 and has 9-degree "<<grados(aux,contador)<<'\n';
  }while(1);
  
  return 0;
}
