/* Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial de n) */

#include <iostream>
using namespace std;

int main() {
	int n; cin>>n;
	int factorial = 1;
	for(int i = 1; i<=n;){
		
		factorial *= i;	
		i++;
	}
	cout<<factorial;
	
	return 0;
}

