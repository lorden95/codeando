/* Escribe un programa que lea de la entrada est�ndar tres n�meros. Despu�s debe leer un cuarto n�mero e indicar si el n�mero coincide con alguno 
de los n�meros introducidos con anterioridad. */

#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c;
	cout<<"Ahora ponga el cuarto numero: ";cin>>d;cout<<endl;
	
	if (d==a || d==b ||d==c ){
		cout<<"Coincide"<<endl;
	} else cout<<"No coincide"<<endl;
	
	return 0;
}

