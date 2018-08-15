#include <iostream>

using namespace std;

int main() {
  int n = 2;
  n = n+(++n);
  cout << n << '\n';
  return 0;
}
