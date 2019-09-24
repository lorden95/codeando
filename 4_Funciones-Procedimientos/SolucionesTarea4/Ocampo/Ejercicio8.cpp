/* Escriba una funcion llamada cambio() que tenga un parámetro en número entero y seis parámetros de referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente .
La funcion tiene que considerar el valor entero transmitido como una cantidad en dólares y convertir el valor en el número menor de billetes equivalentes. */

#include <iostream>
using namespace std;
void cambio(int dinero,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
  
  if(dinero>=100){
    cien = dinero/100; dinero = dinero%100;
    cincuenta = dinero/50; dinero = dinero%50;
    veinte = dinero/20; dinero = dinero%20;
    diez = dinero/10; dinero = dinero%10;
    cinco = dinero/5; dinero = dinero%5;
    uno = dinero/1;
    
  }else if(dinero>=50){
    cincuenta = dinero/50; dinero = dinero%50;
    veinte = dinero/20; dinero = dinero%20;
    diez = dinero/10; dinero = dinero%10;
    cinco = dinero/5; dinero = dinero%5;
    uno = dinero/1;
    
  }else if(dinero>=20){
    veinte = dinero/20; dinero = dinero%20;
    diez = dinero/10; dinero = dinero%10;
    cinco = dinero/5; dinero = dinero%5;
    uno = dinero/1;
    
  }else if(dinero>=10){
    diez = dinero/10; dinero = dinero%10;
    cinco = dinero/5; dinero = dinero%5;
    uno = dinero/1;
    
  }else if(dinero>=5){
    cinco = dinero/5; dinero = dinero%5;
    uno = dinero/1;
    
  }else if(dinero>=1){
    uno = dinero/1;
  }
  
}

int main(){
  int Dinero, n100=0, n50=0, n20=0, n10=0, n5=0, n1=0;
  cout<<"Ingrese la cantidad de dinero: ";
  cin >> Dinero; cout<<"\n\n";
  cambio(Dinero,n100,n50,n20,n10,n5,n1);
  
  cout<<"Equivale a: "<<n100+n50+n20+n10+n5+n1<<" billetes\n";
  cout<<n100<<" billetes de 100 dolares\n";
  cout<<n50<<" billetes de 50 dolares\n";
  cout<<n20<<" billetes de 20 dolares\n";
  cout<<n10<<" billetes de 10 dolares\n";
  cout<<n5<<" billetes de 5 dolares\n";
  cout<<n1<<" billetes de 1 dolar\n\n";
      
  return 0;
} 
