/* Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dólares */


#include <iostream>
using namespace std;

int main() {
	int saldo = 1000;
	int operacion;
	float monto;
	
	cout<<"Presione 1 para Depositar"<<endl<<"Presione 0 para Retirar"<<endl<<endl;
	cout<<"Digite segun la operacion a realizar: ", cin>>operacion; 
	cout<<endl;
	
	if(operacion==1){
		cout<<"Digite el monto a depositar: ",cin>>monto; cout<<endl;
		cout<<"Su saldo actual es de: "<<saldo + monto<<endl;
		
	}else if(operacion==0){
		cout<<"Digite el monto a retirar: ",cin>>monto; cout<<endl;
		
		if(monto>saldo) cout<<"Usted no cuenta con ese dinero. No sea pendejo >:v"<<endl;
		
		else cout<<"Su saldo actual es de: "<<saldo - monto<<endl;
	
	}else cout<<"Opcion incorrecta"<<endl;
	

	return 0;
}

