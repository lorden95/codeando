/* Realice un programa que calcule y muestre en la salida est�ndar la suma de los cuadrados de los 10 primeros enteros mayores que cero */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int suma = 0;
	for(int i=1;i<=10;i++){
		suma += pow(i,2);
	}
	
	cout<<suma<<endl;
	
	
	return 0;
}

