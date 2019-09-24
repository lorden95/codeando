/* Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector. */

#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int vector[n];
    int i;
    
    cout<<"Digite numeros enteros: "<<endl;
    
    for(i=0; i<n; i++){
        cin>>vector[i];
    }
    
    int mayor = vector[0];
    
    for(i=1; i<n; i++){
        if (mayor < vector[i]) {
        mayor = vector[i];
        }
    }
    
    cout<<"El numero entero mayor es: "<<mayor<<endl;
       
    return 0;
}

