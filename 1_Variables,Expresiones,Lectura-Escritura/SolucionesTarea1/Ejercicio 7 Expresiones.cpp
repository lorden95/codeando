#include <iostream>
#include <cmath>
using namespace std;

/* La calificación de un estudiante es la media ponderada de tres notas:
-La nota de prácticas que cuenta un 30% del total,
-La nota teórica que cuenta un 60% del total,
-La nota de participación que cuenta el 10% del total,

Escriba un programa que lea la entrada estándar de las tres notas de un alumno y
escriba en la salida estándar su nota final. */

int main() {
	float Nota_de_practicas, Nota_teorica, Nota_de_participacion; 
	cout<<"Digite la nota de practicas: "; cin>>Nota_de_practicas;
	cout<<"\nDigite la nota teorica: "; cin>>Nota_teorica;
	cout<<"\nDigite la nota de participacion: "; cin>>Nota_de_participacion;
	
	cout<<"\nSu nota de practicas es: "<<Nota_de_practicas<<endl;
	cout<<"Su nota teorica es: "<<Nota_teorica<<endl;
	cout<<"Su nota de participacion es: "<<Nota_de_participacion<<endl;
	
	float NF = Nota_de_practicas*(0.3)+Nota_teorica*(0.6)+Nota_de_participacion*(0.1);
	
	cout<<"Su nota final es: "<<NF<<endl;



	return 0;
	
}
	
