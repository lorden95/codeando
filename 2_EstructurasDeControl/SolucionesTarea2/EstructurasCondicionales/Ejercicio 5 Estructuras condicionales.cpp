/* Escriba un programa que lea de la entrada estándar un caracter e indique en la salida estándar si el caracter es una vocal minúscula */

#include <iostream>
using namespace std;

int main() {
	char letra; cin>>letra; //(letra<95) ? cout<<"Es mayuscula"<<endl : cout<<"Es minuscula"<<endl;
	
	if(letra>=65 && letra<=90){
		cout<<"Es mayuscula."<<endl;
	} else if (letra>=97 && letra<=122) cout<<"Es minuscula."<<endl;
	else cout<<"No es una letra."<<endl;
	
	return 0;
}

// CORREGIDO


