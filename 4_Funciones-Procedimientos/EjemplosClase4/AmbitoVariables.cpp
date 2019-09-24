#include <iostream>
using namespace std;

int n = 3; // var. global

int main() { // funcion principal
	
	cout << n << '\n'; // 3
	
	int n = 5; // var. local (diferente del de arriba, es otro 'n')
	cout << n << '\n'; // 5
	
	for (int i = 0; i < 1; ++i) {
	  int n = 7; // var. local de bloque
	  cout << n << '\n'; // 7
	  if (i == 0) {
	    int n = 10000; // var. local de bloque
	    cout << n << '\n'; // 10000
	  }
	}
	
	cout << n << '\n'; // 5
	
	return 0;
}
