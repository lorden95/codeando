#include <iostream>
using namespace std;

/*
// Forma iterativa
int sumar(int n) {
  int suma = 0;
  for (int i = 1; i <= n; ++i) {
    suma += i;
  }
  return suma;
}
*/

// Forma Recursiva
int sumar(int n) {
  if (n == 0) return 0;
  return n + sumar(n - 1);
}

int main() {
    
  int n;
  cin >> n;

  cout << sumar(n) << '\n';
    
  return 0;
}
