#include <iostream>
#include "PoligonoIrreg.h"

using namespace std;

int main(){
  int num_vertices = 0;
  PoligonoIrreg poligono;
  srand(time(NULL));
  num_vertices = rand() % 100;
  poligono.anadeVertice(num_vertices);
  poligono.imprimeVertices();
  cout << "Total de vertices: " << poligono.getTotalVertices() << '\n';
  return 0;
}
