#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main( ){
  Rectangulo rectangulo1(Coordenada(2,3),Coordenada(5,1));
  rectangulo1.obtieneArea();
  return 0;
}
