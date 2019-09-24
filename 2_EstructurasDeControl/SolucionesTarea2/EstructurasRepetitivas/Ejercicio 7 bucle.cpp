/* Escriba un programa que calcule el valor de: 1 + 2 + 3 + ... + n */

#include <iostream>
using namespace std;

int main() {
	 int suma=0;
	 int n; cin>>n;
	 
	 for(int i=1;i<=n;i++){
	 	
	 	suma += i;
	 }
	cout<<suma<<endl; 
	 
	return 0;
}

