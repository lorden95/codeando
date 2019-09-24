#include <iostream>
using namespace std;

int comb(int n, int k) { // pascal
  if (k == 0 or k == n) return 1;
  return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main() {
  
  int n, k;
  cin >> n >> k;

  cout << comb(n, k) << '\n';
    
  return 0;
}
