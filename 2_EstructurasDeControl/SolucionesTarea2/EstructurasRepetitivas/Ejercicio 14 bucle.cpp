/* En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
	1- Alumnos que aprobaron todos los exámenes
	2- Alumnos que aprobaron al menos un examen
	3- Alumnos que aprobaron únicamente el último examen 
	
	Realizar un programa que calcule esas estadísticas.*/

#include <iostream>
using namespace std;

int main() {
	cout<<"\tPrograma para calificar a estudiantes";
	int alumno; cout<<"\n\nIngrese el numero de estudiantes: ";cin>>alumno; cout<<endl;
	int nota1, nota2, nota3, aprobado;
	int c1=0;
	int c2=0;
	int c3=0; 
	int nrotest; cout<<"Ingrese el numero de examenes: ";cin>>nrotest; cout<<endl;
	cout<<"Ahora ingrese las notas de los estudiantes.."<<endl;
	
	for(int i=1;i<=alumno;i++){
		cout<<"\nNotas de estudiante "<<i<<endl<<endl;
		aprobado=0;
		for(int j=1; j<=nrotest; j++){
				
			switch(j){
				case 1: {cout<<"Examen de Matematica "; 
						cin>>nota1;
						if (nota1>=10) aprobado++;
						break;
				}
				case 2: {cout<<"Examen de Historia ";
						cin>>nota2;
						if (nota2>=10) aprobado++;					
						break;
				}
				default: {cout<<"Examen de Educacion para el trabajo ";
						cin>>nota3;
						if (nota3>=10) aprobado++;	
						break;
				}
			}
					
		}
			if(aprobado==nrotest) c1++;
			if(aprobado>=1) c2++;
			if(aprobado>=1 && nota3>=10) c3++;
	}
		cout<<"\n\n"<<c1<<" alumnos aprobaron todos los examenes"<<endl;
		cout<<c2<<" estudiantes aprobaron al menos un examen"<<endl;
		cout<<c3<<" estudiantes solo aprobaron el ultimo examen"<<endl;
		
		
	
	return 0;
}

