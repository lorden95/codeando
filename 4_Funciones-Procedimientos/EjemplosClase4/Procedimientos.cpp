#include <iostream>
using namespace std;

void showArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    if (i != 0) cout << " ";
    cout << arr[i]; 
  }
  cout << endl;
  return;
}

int main() {
  
  int a[100];
  
  int n;
  cin >> n;
  
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  
  showArray(a, n);
  
  return 0;
}
