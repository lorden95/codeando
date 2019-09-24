/* Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la funcion pow. */
#include <iostream>
using namespace std;

int main() {
	
	int x,y; cin>>x>>y;
	int resultado=1;
	if(y>=0)
	for(int i=0;i<y;i++){
		
		resultado *= x;
		
	}
	cout<<resultado;
	
	return 0;
}

