/* Escribe un programa que defina un vector de números y calcule la suma de sus elementos */

#include <iostream>
using namespace std;

int main(){
    
  /*  int n; cin>>n;
    double numero[n];
    double suma = 0;            
   for(int i=0; i<n; i++){
   cin>>numero[i];
   suma += numero[i];
   }  
    
    cout<<"La suma total es: "<<suma<<endl;    
    */
    
    // DEFINIENDO UN VECTOR
    
    int vector[5] = {1,2,3,4,5};
    int suma = 0;
    for(int i=0; i<5; i++){
        suma += vector[i];
    }
    cout<<"La suma es: "<<suma<<endl;
    
    return 0;
}
