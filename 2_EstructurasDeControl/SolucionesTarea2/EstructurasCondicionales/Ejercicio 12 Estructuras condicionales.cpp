/* Hacer un menu que considere las siguientes opciones: 
	Caso 1: Cubo de un número
	Caso 2: Número par o impar
	Caso 3: salir.
*/	

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int numero; 
	cout<<"Ingresa un numero: ";
	cin>>numero; cout<<endl;
	int opcion;
	
	cout<<"\tTe doy tres opciones compare"<<endl<<endl;
	cout<<"1. Conocer el cubo del numero que pusiste"<<endl;
	cout<<"2. Saber si es impar o no"<<endl;
	cout<<"3. Para que safes no mas"<<endl<<endl;
	cout<<"Opcion: ";cin>>opcion;cout<<endl;
	
	switch(opcion){
		case 1: cout<<"Su cubo es "<<pow(numero,3)<<" "<<endl;
		break;
		case 2:	if(numero%2==0)
				cout<<"Su numero es par."<<endl;
				else
				cout<<"Su numero es impar."<<endl;
		break;
		case 3: cout<<"Alamos low IQ"<<endl;
		break;
	
	}
	
	return 0;
}

