#include <iostream>
using namespace std;

// ¿Cual es el valor de 'x'?

int main() {

	// Con break;
	int y = 0;
	int x = 0;
	while (y < 10) {
		y++;
		if (y == 3) break;
		x++;
	}
	cout << "x = " << x << endl; // 2
	
	
	// Con continue:
	y = 0;
	x = 0;
	while (y < 10) {
		y++;
		if (y == 3) continue;
		x++;
	}
	cout << "x = " << x << endl; // 9
	
	return 0;
}
