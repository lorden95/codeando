/* Escriba una funcion nombrada tiempo() que tenga un parámetro en número entero llamado totalSeg y tres parámetros de referencia enteros nombrados horas, min y seg. La funcion es convertir el número de segundos transmitido en un número equivalente de horas, minutos y segundos. */

#include <iostream>
using namespace std;

void tiempo(int totalSeg,int& horas,int& min,int& seg){
  if(totalSeg>=3600){
    horas = totalSeg / 3600;
    totalSeg = totalSeg%3600;
    min = totalSeg / 60;
    totalSeg = totalSeg%60;
    seg = totalSeg / 1; // no es necesario poner el " / 1" pero para que se entienda que son segundo xd    
  }else if(totalSeg>=60){ 
    min = totalSeg / 60;
    totalSeg = totalSeg%60;
    seg = totalSeg / 1;    
  }else if(totalSeg>=0){
    seg = totalSeg / 1;  
  }
}
int main(){
  
  int time, h=0,m=0,s=0;
  cout<<"Introduzca el tiempo en segundos a convertir: "; cin>>time;
  
  tiempo(time,h,m,s);
  
  cout<<"Es igual a "<<h<<" horas, "<<m<<" minutos y "<<s<<" segundos.\n\n";
  return 0;
}
