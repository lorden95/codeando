#include <iostream>
using namespace std;

int SumandoDigitos(int n){
  if(n <= 10) return n%10;
  
  return n%10 + SumandoDigitos(n/10);    
}

int gn(int n){
  int gx = SumandoDigitos(n);
  if(gx >= 10) return gn(gx);
  else return gx;
}

int main(){
  int n;
  do{
    cin >> n;
  if(n == 0){
    return 0;
  }
    cout<<gn(n)<<'\n';
  }while(1);
  
  return 0;
}
