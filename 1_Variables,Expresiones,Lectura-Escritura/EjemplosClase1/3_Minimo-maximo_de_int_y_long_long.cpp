#include <iostream>
#include <climits> // INT_MAX, INT_MIN, LLONG_MAX, LLONG_MIN
using namespace std;

int main() {
	
	cout << "Maximo valor de un int (2^31 - 1) = " << INT_MAX << endl; 
	cout << "Minimo valor de un int (-2^31)    = " << INT_MIN << endl;
	
	cout << "Maximo valor de un long long (2^63 - 1) = " << LLONG_MAX << endl;
	cout << "Minimo valor de un long long (-2^63)    = " << LLONG_MIN << endl;
	
	return 0;
}
