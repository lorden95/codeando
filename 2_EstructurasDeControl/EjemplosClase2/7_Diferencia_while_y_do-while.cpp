#include <iostream>
using namespace std;

int main() {
	
	// while: ejecuta 0 o mas veces
	int x = 10;
	while (x < 10) {
		x++;
	}
	cout << "x = " << x << endl; // 10
	
	
	// do-while: ejecuta 1 o mas veces
	x = 10;
	do {
		x++;
	} while (x < 10);
	cout << "x = " << x << endl; // 11
	
	return 0;
}
