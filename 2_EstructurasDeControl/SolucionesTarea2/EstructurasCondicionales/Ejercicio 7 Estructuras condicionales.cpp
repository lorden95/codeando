/* Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25] */

#include <iostream>
using namespace std;

int main() {
	int edad; cin>>edad; 
	
	//(edad>=18 && edad <= 25) ? cout<<"Su edad esta en el rango."<<endl : cout<<"Su edad no esta en el rango";
	
	/*
	if (edad>=18 && edad <= 25){
		cout<<"Su edad esta en el rango"<<endl;
	} else cout<<"Su edad no esta en el rango"<<endl;
	*/
	
	if (edad>=18){
		if(edad<=25) cout<<"Su edad esta en el rango."<<endl;	
		else cout<<"Su edad no esta en el rango."<<endl;	
	}else cout<<"Su edad no esta en el rango."<<endl;

	return 0;
}

//   CORREGIDO PAPU
