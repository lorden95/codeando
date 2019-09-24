/* Escriba un programa que calcule el valor de: 1! + 2! + 3! + ... + n! (suma de factoriales) */

#include <iostream>
using namespace std;

int main() {
	int i,j,n; cin>>n;
	int factorial;
	int suma = 0;
	for(i = 1; i<=n; i++){
		factorial = 1;
		for(j = 1; j<=i; j++){
		factorial *= j;
		
		}
		
		suma += factorial;
	}
	
	cout<<suma;
	
	return 0;
}

