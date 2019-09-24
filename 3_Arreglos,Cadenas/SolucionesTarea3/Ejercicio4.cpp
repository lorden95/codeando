/* Escribe un programa que defina un vector de numeros y muestre en la salida estándar el vector en orden inverso - del último al primer elemento */

#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int vector[n];
    cout<<"Ingrese numeros enteros: "<<"\n\n";
    for(int i=0; i<n; i++){
        cin>>vector[i];
    }   
    
    cout<<"Este es el nuevo orden de los numeros ingresados: "<<endl;
    for(int i=n-1; 0<=i; i--){
        cout<<vector[i]<<" ";
    }
    
    return 0;
}
