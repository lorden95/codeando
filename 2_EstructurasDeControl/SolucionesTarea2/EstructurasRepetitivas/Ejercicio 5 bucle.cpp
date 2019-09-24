/* Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0.
El programa debe entregar la suma de valores mayores a 0 introducidos. */

#include <iostream>
using namespace std;

int main() {
	
	int x;
	int suma = 0;
	
	while(true){
		
		cin>>x;
		if(x==0 || (x>=20 && x<=30)) {
		break;}
		
		if(x>0){
		suma += x;
		}
	}
	cout<<"La suma de todos los numeros que digito es "<<suma<<endl;
	

	return 0;
}


