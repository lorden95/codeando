/* Escriba un programa que lea dos n�meros y determine cual es el mayor */

#include <iostream>
using namespace std;

int main() {
	int a,b; cin>>a>>b;
	bool mayor = (a>b);
	if(mayor==true){
		cout<<a<<endl;	
	} else cout<<b<<endl;
	


	return 0;
}

