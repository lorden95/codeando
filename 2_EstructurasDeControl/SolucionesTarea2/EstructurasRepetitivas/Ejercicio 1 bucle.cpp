/* Realice un programa que solicite de la entrada est�ndar un entero del 1 al 10 y muestre en la salida est�ndar su tabla de multiplicar. */

#include <iostream>
using namespace std;

int main() {
	int a; 
	cout<<"\tLa tabla de multiplicar"<<endl<<endl;
	cout<<"Quiero la tabla del numero: "; cin>>a;
	cout<<endl;
	for(int i=0;i<=12;i++){
		
		cout<<a<<" x "<<i<<" = "<<a*i<<endl;
	}
	
	
	return 0;
}

