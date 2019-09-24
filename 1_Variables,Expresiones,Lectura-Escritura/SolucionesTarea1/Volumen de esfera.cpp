#include <iostream>
#include <cmath>
using namespace std;

/*Escriba un programa que calcule el volumen de una esfera*/
/* V = (4/3)*PI*R^3*/


int main() {
	const double PI = 3.14159;
		
	double V; /*volumen de la esfera*/
	double R; cout<<"Pon el radio en metros: ",cin>>R; //radio de la esfera
	
	V= (4.0/3.0)*PI*pow(R,3);
	
	cout<<"\nEl area de la esfera es: "<<V<<endl;
	
	

	return 0;
}

