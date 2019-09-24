/* Escribe un programa que lea tres numeros y determine cual de ellos es el mayor */ 


//              CORREGIDO


#include <iostream>
using namespace std;

int main(){
	
		int a,b,c;
	cout<<"\tBienvenido a tu perdicion, gg no mas"<<endl<<endl;
	cout<<"Ingrese el valor de 'a': "; cin>>a; cout<<endl;
	cout<<"Ingrese el valor de 'b': "; cin>>b; cout<<endl;
	cout<<"Ingrese el valor de 'c': "; cin>>c; cout<<endl;
	
	int s = a-b;
	int d = b-c;
	int f = c-a;
	
	if(a>b){
		if(c<a) cout<<"El mayor es: "<<a<<endl;
		else if (c==a) cout<<"El mayor es: "<<a<<endl;
		else cout<<"El mayor es: "<<c<<endl;
	
	}else if (a==b){		
		if (c<a) cout<<"El mayor es"<<a<<endl;
		else if (c==a) cout<<"Los tres numeros son iguales."<<endl;
		else cout<<"El mayor es: "<<c<<endl;
			
	}else if (a<b){
		if (b>c) cout<<"El mayor es: "<<b<<endl;
		else if (b==c) cout<<"El mayor es: "<<b<<endl;
		else cout<<"El mayor es: "<<c<<endl;
	}	
		
	return 0;	
}



/*         OUTPUTA las letras o la letra que se asignó el mayor valor

#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"\tBienvenido a tu perdicion, gg no mas"<<endl<<endl;
	cout<<"Ingrese el valor de 'a': "; cin>>a; cout<<endl;
	cout<<"Ingrese el valor de 'b': "; cin>>b; cout<<endl;
	cout<<"Ingrese el valor de 'c': "; cin>>c; cout<<endl;
	
	int s = a-b;
	int d = b-c;
	int f = c-a;
	
	if(s>0){
		if(f<0) cout<<"El mayor es: "<<"a"<<endl;
		else if (f==0) cout<<"Los mayores son: "<<"a"<<" y "<<"c"<<endl;
		else cout<<"El mayor es: "<<"c"<<endl;
	
	}else if (s==0){		
		if (f<0) cout<<"Los mayores son: "<<"a"<<" y "<<"b"<<endl;
		else if (f==0) cout<<"Los tres numeros son iguales."<<endl;
		else cout<<"El mayor es: "<<"c"<<endl;
			
	}else if (s<0){
		if (d>0) cout<<"El mayor es: "<<"b"<<endl;
		else if (d==0) cout<<"Los mayores son: "<<"b"<<" y "<<"c"<<endl;
		else cout<<"El mayor es: "<<"c"<<endl;
	}	
	
	
	return 0;
}

*/



