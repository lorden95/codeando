/* Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno 
de los números introducidos con anterioridad. */

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

