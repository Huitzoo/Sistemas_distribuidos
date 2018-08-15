#include <iostream>
using namespace std;

int main(){

  const double PI = 3.1415926;

  double radio = 0;

  cout << "Calcular área de un círculo" << '\n';
  cout << "Dame el radio: ";
  cin >> radio;
  cout << PI*radio*radio << '\n';

  return 0;
}
