/* Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equivale  a la suma del resto de numeros del vector */

#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int vector[n];
    int suma = 0;
    
    for(int i=0; i<n; i++){
        cin>>vector[i];
        suma += vector[i];
    }
    
    for(int i=0; i<n; i++){
        if (suma == 2 * vector[i])
        {
            cout<<"El numero "<<vector[i]<<" equivale a la suma del resto de numeros del vector"<<endl;
        }
    }
    
    
    return 0;
} 
