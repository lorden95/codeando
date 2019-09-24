/* Hacer un programa que calcule el resultado de la siguiente expresion:
		1 - 2 + 3 - 4 + 5 - 6...n										*/

#include <iostream>
using namespace std;

int main() {
	int n; cin>>n;
	int resultado = 0;
	
	for(int i = 1; i<=n; i++){
		
		if(i%2==0) resultado -= i;
		else resultado += i;
		
	}
	cout<<resultado;
	return 0;
}

