/* Realice un programa que lea de la entrada est�ndar n�meros hasta que se introduzca un cero. 
En ese momento el programa debe terminar y mostrar en la salida est�ndar el n�mero de valores
mayores que cero le�dos */

#include <iostream>
using namespace std;

int main() {
	
	int x;
	int count = 0;
	
	while(true){
		cin>>x;
		if(x==0) break;
		
		if(x>0) count++;
	}
	
	cout<<"Usted digito "<<count<<" numeros positivos"<<endl;
	
	return 0;
}

