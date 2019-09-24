/* Escriba una funcion llamada mult() que acepte dos números en punto flotante como parámetros, estos dos números y despliegue el resultado. */

#include <iostream>
using namespace std;

void mult(float a, float b){
    cout<<a*b<<endl;

}

int main(){
    float num1, num2;
    cin >> num1 >> num2;
    
    mult(num1,num2);
        
    return 0;
}
