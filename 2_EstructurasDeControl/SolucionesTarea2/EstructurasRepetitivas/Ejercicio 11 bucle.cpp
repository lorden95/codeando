/* Escribe un programa que calcule el valor de: 2^1 + 2^2 + 2^3 + ... + 2^n */
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n; cin>>n;
	int suma = 0;
	
	for(int i=1;i<=n;i++){
		
		suma += pow(2,i);
		
	}
	cout<<suma;

	return 0;
}
*/

// OTRA FORMA
#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int suma=0;
	int pow2;	
	for(int i=1; i<=n;i++){
		pow2=1;
		for(int j=1; j<=i;j++){
			
			pow2 *= 2;
		}
		suma += pow2;
	}
	
	cout<<suma;
	
	return 0;
}
