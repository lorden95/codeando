#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	cout.precision(8);
	cout<<fixed;

	double a,b,c,d,x1,x2;
	cin>>a>>b>>c;
	d = pow((b),2)-4.0*a*c; // d = discriminante
	x1 = (-(b)-(sqrt(d)))/(2.0*a);
	x2 = (-(b)+(sqrt(d)))/(2.0*a);
	if(d>=0){
		if(d>0){
		cout<<"Raiz 1 es: "<<x1<<" y la Raiz 2 es: "<<x2<<endl;
		}
		else{
		cout<<"Su unica raiz es: "<<x1<<endl;
		}
	} else cout<<"No tiene solucion, es absurdo xd";
	
	

	return 0;
}

