#include <iostream>
using namespace std;

int main() {
	int alumno_1, alumno_2, alumno_3, alumno_4;
	
	cout<<"Nota Final Alumno 1: "; cin>>alumno_1;
	cout<<"\nNota Final Alumno 2: "; cin>>alumno_2;
	cout<<"\nNota Final Alumno 3: "; cin>>alumno_3;
	cout<<"\nNota Final Alumno 4: "; cin>>alumno_4;
	
	cout<<"\nLa Nota Final del Alumno 4 es: "<<alumno_4<<endl;
	
	int suma_de_notas = alumno_1+alumno_2+alumno_3+alumno_4;
	
	float Promedio_notas_final = suma_de_notas/4.0;
	
	cout<<"El promedio de Notas Final es: "<<Promedio_notas_final<<endl; 
	
	return 0;
}

