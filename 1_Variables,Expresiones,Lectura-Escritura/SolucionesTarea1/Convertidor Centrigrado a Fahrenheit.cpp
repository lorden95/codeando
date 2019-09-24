#include <iostream>
using namespace std;

/* Escriba un programa que convierta grados Centígrados a grados Fahrenheit.*/
/* F = (9/5)* C + 32    */

int main() {
	
	double C; /*Temperatura en grados Centrígrados*/
	
	cout<<"Introducir temperatura en grados Centigrados: ",cin>>C;
	
	double F=(9.0/5.0)*C + 32;
	cout<<"\nEs igual a: "<<F<<" grados Fahrenheit"<<endl;





	return 0;
}

