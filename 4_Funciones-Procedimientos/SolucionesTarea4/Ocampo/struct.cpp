/* Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos:
  .Nombre
  .Edad
  .Sexo
  .Club
  pedir los datos al usuario para un corredor, y asignarle una categoría de competición:
  -Juvenil <= 18 años
  -Señor <= 40 años
  -Veterano > 40 años
  Posteriormente imprimir todos los datos del corredor, incluida su categoria de competición. */
  
#include <iostream>
#include <cstring>

using namespace std;

char categoria(int x){
  char category[20];
  
  if(x>0 and x<=18){
    strcpy(category,"Juvenil");
  } else if(x>18 and x<=40){
    strcpy(category,"Senior");
  } else strcpy(category,"Veterano");
  
  return category;
} 

struct corredor{
  char Nombre[40];
  int edad;
  char sexo[10];
  char club[30];
  char cat[15];
};

int main(){
  int n; cin >> n;
  struct corredor atleta[n];
  
  for(int i=0; i<n; i++){
    if(i!=0) cout>>'\n';
    cout<<"Ingrese datos del atleta "<< i+1 <<'\n';
    cout<<"Nombre: "; 
    getline(cin,atleta[i].Nombre); 
    cout<<'\n';
    cout<<"Edad: "; 
    cin >> atleta[i].edad; 
    cout<<'\n';
    cout<<"Sexo: "; 
    getline(cin,atleta[i].sexo); 
    cout<<'\n';
    cout<<"Club: "; 
    getline(cin,atleta[i].club); 
    cout<<'\n';
  }
  
  //Imprimiendo lo requerido;
  for(int i=0; i<n; i++){
    cout<<"\nDatos personales del atleta "<< i+1 <<'\n';
    cout<<"Nombre: "<< atleta[i].Nombre <<'\n';
    cout<<"Edad: "<< atleta[i].edad <<'\n';
    cout<<"Sexo: "<< atleta[i].sexo <<'\n';
    cout<<"Club: "<< atleta[i].club <<'\n';
    cout<<"Categoria: "<< categoria(atleta[i].edad) <<'\n';
  }
  
  return 0;
}









