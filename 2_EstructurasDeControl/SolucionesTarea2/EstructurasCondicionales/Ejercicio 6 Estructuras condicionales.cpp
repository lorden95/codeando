/* Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estándar si el caracter es una vocal minuscula,
es una vocal mayuscula o no es vocal. */ 

#include <iostream>
using namespace std;

int main() {
	char vocal; cin>>vocal;
	switch(vocal){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es vocal mayuscula."<<endl;
		break;
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es vocal minuscula."<<endl;
		break;
		default : cout<<"No es vocal pes gil >:v"<<endl; 
		}
		
/*	Usando ASCII

	switch(vocal){
		case 65:
		case 69:
		case 73:
		case 79:
		case 85: cout<<"Es vocal mayuscula."<<endl;
		break;
		case 97:
		case 101:
		case 105:
		case 111:
		case 117: cout<<"Es vocal minuscula."<<endl;
		break;
		default : cout<<"No es vocal pes gil >:v"<<endl; 
		}
*/
	return 0;
}

