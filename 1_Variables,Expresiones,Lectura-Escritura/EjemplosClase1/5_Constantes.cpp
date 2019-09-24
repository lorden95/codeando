#include <iostream>
#include <cmath> // acos, M_PI
using namespace std;

int main() {
	
	cout << "Variable constante:" << endl;
	const double PI_1 = acos(-1); // otra forma de calculo de PI: PI = M_PI;
	//PI_1 = 30;                  // error de compilacion, no se puede modificar una const
	cout << "PI = " << PI_1 << endl;
	
	
	cout << "Variable normal:" << endl;
	double PI_2 = acos(-1);                       // variable sin const
	cout << "PI = " << PI_2 << endl;              // 3.14159
	PI_2 = 1343.342;                              // se puede modificar
	cout << "PI (modificado) = " << PI_2 << endl; // 1343.34

	return 0;
}
