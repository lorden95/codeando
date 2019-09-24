/* Escribe un programa que defina un vector de números y calcule la multiplicacion acumulada de sus elementos */

#include <iostream>
using namespace std;

int main(){
    long long vector[5] = {1,2,3,4,5};
    int producto_total = 1;
    
    for(int i=0; i<5; i++){
    
        producto_total *= vector[i];
    }
       cout<<"El producto acumulado es: "<<producto_total;
    return 0;
}
