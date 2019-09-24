#include <iostream>
using namespace std;

double x = 1;

int main() {
    cout << x << endl; // 1
    double x = 2;
    cout << x << endl; // 2
    if (x == 2) {
        double x = 3;
        cout << x << endl; // 3
    }
    cout << x << endl; // 2
    {
        double x = 4;
        cout << x << endl; // 4
    }
    cout << x << endl; // 2
    
    
    if (1) {
	      int local = 9;
	  }
	  // cout << local << '\n'; // Error Compilacion, pq 'local' no es valido aqui
    
    return 0;
}
