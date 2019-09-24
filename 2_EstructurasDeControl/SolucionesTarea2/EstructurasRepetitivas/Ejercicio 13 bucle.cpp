/* Hacer un programa que realize la serie fibonacci */

#include <iostream>
using namespace std;

int main() {
	// debe imprimir hasta el numero n de fibonacci  1 1 2 3 5 8 13 . . . n
	int n;
	long long f1=0;
	long long f2=1;
	long long f3=1;
	
	cout<<"¿Hasta que numero de fibonacci quieres imprimir?"<<endl;
	while(1){
		cin>>n;
		if (n>0) break;
		
		cout<<"Pon un entero positivo pes crrano"<<endl;
	
	}
	for(int i=1 ;i<=n;i++){
		cout<<f3<<" ";
		
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	
	
	cout<<"\n\nSolo quiero decir... Gracias"<<endl;
	return 0;
}

