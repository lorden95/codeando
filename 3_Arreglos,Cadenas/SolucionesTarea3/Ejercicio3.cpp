/* Escribe un programa que lea de la entrada estándar un vector de numeros y muestre en la salida estándar los números del vector con sus indices asociados. */

#include <iostream>
using namespace std;

int main(){
/*
    int vector[5] = {1,1,2,3,5};
    cout<<"Los primeros cinco numeros de fibonacci son: "<<endl;
*/  
    int n; cin>>n;
    int vector[n];
    
    for(int i=0; i<n; i++){
        cin>>vector[i];
    }
    
    for(int i=0; i<n; i++){
    cout<<"En el indice "<<i<<" esta el numero "<<vector[i]<<endl;
    }   
    return 0;
}
