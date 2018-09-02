#include <iostream>
#include <math.h>
#include "Rectangulo.h"

using namespace std;

int main( ){
  Rectangulo rectangulo1(Coordenada(3.605,0.982),Coordenada(5.099,0.197));
  rectangulo1.obtieneArea();
  return 0;
}
