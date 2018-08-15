#include <iostream>
using namespace std;
int main( )
{
  double temperatura;
  double resultado;
  cout << "Ingresa una temperatura" << '\n';
  cin >> temperatura;
  resultado = (static_cast<double>(9)/static_cast<double>(5)*temperatura) + 32.0;
  cout <<  resultado << '\n';
}
