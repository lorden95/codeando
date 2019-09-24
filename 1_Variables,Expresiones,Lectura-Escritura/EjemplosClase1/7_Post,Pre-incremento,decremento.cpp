	
#include <iostream>
using namespace std;

int main() {
	
	// Post-incremento / Post-decremento:
	int x = 3, y = 3;
	cout << x++ << " " << y-- << endl; // x == 3, y == 3
	cout << x << " " << y << endl;     // x == 4, y == 2
	
	
	// Pre-incremento / Pre-decremento:
	x = 3, y = 2;
	cout << ++x << " " << --y << endl; // x == 4, y == 2

	return 0;
}
