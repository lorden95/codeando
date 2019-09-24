/* Comprobar si un numero digitado por el usuario es positivo o negativo */ 

#include <iostream>
using namespace std;

int main() { // Dado que el cero es neutro, no es positivo ni negativo
	int x; cin>>x; (x==0) ? cout<<"El cero es neutro, no es positivo ni negativo." : ((x<0) ? cout<<"Es negativo"<<endl : cout<<"Es positivo");
	
	

	return 0;
}

