#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int sumagrade(int n){
  if(n<10) return n;
  return n%10 + sumagrade(n/10); 
}

int grados(int num,int& c){
  num = sumagrade(num);
  if(num%9 == 0){
    if(num>=10){
    c++;
    return grados(num,c);
    }else{
    c++; 
    return c;
    }
  }else{
    return c;
  }
}


int main(){
  char n[1001],m[1001];
  int num,contador;
  do{
    cin >> n;
  if(n == 0){
    return 0;
  }
  num = atol(n);
    contador = 0;
  if(num%9 !=0 ){
    cout<<num<<" is not a multiple of 9.\n";
  }else{
    cout<<n<<" is a multiple of 9 and has 9-degree "<<grados(num,contador)<<'\n';
  }
  
  }while(1);
  
  return 0;
}
