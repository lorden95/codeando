/* Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier numero introducido por el usuario. Por ejemplo, 256.879, deberia desplegarse el numero 0.879 */

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

char x[1000000];

void ingreso_num(char x[]);
void verificacion(char x[]);
void parte_fracc(char x[]);


void ingreso_num(char x[]){
  printf("Digite un numero con parte fraccionaria\n");
  cin >> x;
  verificacion(x);
}

void verificacion(char x[]){
  int len = strlen(x);
  int i = 0;
  
  while(i<len){
    if(x[i] == '-' or x[i] == '0' or x[i] == '1' or x[i] == '2' or x[i] == '3' or x[i] == '4' or x[i] == '5' or x[i] == '6' or x[i] == '7' or x[i] == '8' or x[i] == '9' or x[i] == '.'){
      i++;  
    }else {
      ingreso_num(x); 
      return;
    }
    
  }
  
  parte_fracc(x);    
}

void parte_fracc(char x[]){
  int len = strlen(x);
  for(int i=0; i<len; i++){
    if(x[i] == '.'){
      cout<<"0.";
      for(int j=i+1; j<len ; j++){
        cout<<x[j];  
      }
      break;
    }
  }
  
  
}


int main(){
  
  ingreso_num(x);
      
  return 0;
}
