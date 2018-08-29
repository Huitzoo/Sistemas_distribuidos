#include "Fecha.h"
#include <iostream>

using namespace std;

int main(){

  Fecha a(1, 12, 1990), b(3, 11, 2017), c(0, 9, 2020), d;

  a.muestraFecha();
  b.muestraFecha();
  c.muestraFecha();
  d.muestraFecha();

  return 0;
}
