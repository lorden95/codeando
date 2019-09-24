/* Escriba un programa que calcule el valor de: 1 + 3 + 5 + ... + (2n-1) */

#include <iostream>
using namespace std;

int main() {
	
	int n; 
	int suma = 0;
	cin>>n;
	for(int i=1; i<=n; i++){
		 
		 suma += (2*i - 1);
	}
	cout<<suma;
	
	
	return 0;
}

