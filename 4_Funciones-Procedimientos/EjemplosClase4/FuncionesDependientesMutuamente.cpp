#include <iostream>
using namespace std;

int aa(int adsads);
int bb(int adsads);

int aa(int param1) {
  // ...
  int aux1 = bb(5);
  //
  return algo1;
}

int bb(int param2) {
  // ...
  int aux2 = aa(7);
  // ...
  return algo2;
}

int main() {
    return 0;
}
