#include <iostream>
using namespace std;

int a[100000];

void estupid(int n) {
  for (int i = 0; i < n; ++i) {
    a[i] = i;
  }
  return;
}

int main() {
  
  int n;
  cin >> n;
  
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  } 
  
  estupid(n);
  
  for (int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
  
  return 0;
}
