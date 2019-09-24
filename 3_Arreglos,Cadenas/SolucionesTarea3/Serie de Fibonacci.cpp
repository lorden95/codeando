/* Desarrolle un programa que almacene los primeros 81 términos de la serie de Fibonacci en un arreglo de enteros de 64 bits (long long)
F[0] = 0
F[1] = 1
F[i] = F[i-1] + F[i-2]
*/


#include <iostream>
using namespace std;

int main() {
	
	long long Numeros_Fibonacci[81];
	int i;
	for(i=0; i<81;i++){
		Numeros_Fibonacci[i] = 0;  // Llenamos todos los espacios de memoria con "0"
								   // para eliminar datos basura.		
	}
	
	Numeros_Fibonacci[0] = 0; // Inicializamos el índice "0" del array
	Numeros_Fibonacci[1] = 1; // Inicializamos el índice "1" del array
	
	i = 2; // Volvemos a inicializar "i"
	while(i<81){
		Numeros_Fibonacci[i] = Numeros_Fibonacci[i-1] + Numeros_Fibonacci[i-2];
		i++;
		
	} 
	
	
	cout<<"Digite un numero entero positivo menor a 81: "; cin>>i;
	cout<<"\nEl numero "<<i<<" de Fibonacci es: "<<Numeros_Fibonacci[i]<<endl;
	return 0;
}

