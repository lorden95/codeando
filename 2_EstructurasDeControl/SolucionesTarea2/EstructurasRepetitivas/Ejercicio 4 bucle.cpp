/* Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un periodo de 
de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura más alta y la más baja. */


#include <iostream>
using namespace std;

int main() {
	cout.precision(2);
	cout<<fixed;
	double t[7];
	t[0]=0;
	int i; 
	double mediat =0;
	double mint =0;
	double maxt =0;
	for(i=0;i==0;i++){
		cin>>t[i];
		mediat= t[i];
		maxt= t[i];
		mint= t[i];
		
		for(i=2;i<=6;i++){
		cin>>t[i];
		mediat += t[i]; 
			
			if(t[i]>=maxt) maxt= t[i];
			
			if(t[i]<=mint) mint= t[i];			
		}	
	}	
	cout<<"La temperatura media del dia es "<<mediat/6<<" grados."<<endl;
	cout<<"La temperatura maxima del dia es "<<maxt<<" grados."<<endl;
	cout<<"La temperatura minima del dia es "<<mint<<" grados."<<endl;
	
	return 0;
}

