/* Escriba una funcion nombrada calc_anios() que tenga un parámetro entero que represente el número total de días desde la fecha 01/01/2000 y parámetros de referencia nombrados anio, mes y día. La funcion es calcular el anio, mes y día actual para el número dado de días que se le transmitan. */

#include <iostream>
using namespace std;

bool anio_bisiesto(int n){
  bool abisiesto = false;
  if((n%4==0 and n%100!=0) or n%400==0){
    abisiesto = true;
  }
  return abisiesto;
}

void calc_anios(int dias,int& a,int& m,int& d){

  while(dias > 0){
    if(dias>=366){
      if(anio_bisiesto(a)){
        dias -= 366;
        a++;
        continue;
      }else{
        dias -= 365;
        a++;
        continue;        
      }
    }else if(dias>=31){
      
      if(m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12){
        dias -= 31;
        m++;
      }else if(m==4 or m==6 or m==9 or m==11){
        dias -= 30;
        m++;
      }else if(m==2){
        if(anio_bisiesto(a)){
          dias -= 29;
          m++;
        }else{
          dias -= 28;
          m++;
        } 
      }
      if(m==13){
        a++;
        m==1;
      }
    }else if(dias>0){
      if(dias>=28 and m==2){
        if(anio_bisiesto(a)){
          dias -= 29;
          m++;
        }else{
          dias -= 28;
          m++;
        }
      }else if(dias==30 and (m==4 or m==6 or m==9 or m==11)){
        dias -= 30;
        m++;  
      }else{
        d += dias;
        dias = 0;
      }
    }
  }
}
int main(){
  
  int ndias, anio=2000, mes=1, dia=1; // ndias representa los dias que debo contar desde 01/01/2000
  cout<<"Introduzca el numero de dias: "; cin>>ndias;
  
  calc_anios(ndias,anio,mes,dia);
  
  cout<<"\n\nLuego de "<<ndias<<" la fecha sera: "<<dia<<'/'<<mes<<'/'<<anio;
  
  return 0;
}
