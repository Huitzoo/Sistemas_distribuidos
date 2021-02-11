#include "PoligonoIrreg.h"

int main(){
  PoligonoIrreg poliedro;
  int num_vertices = 6;
  for(int i = 0; i < num_vertices; i++){
    poliedro.anadeVertice(Coordenada(4 + i,5 + 2 * i));
    poliedro.anadeVertice(Coordenada(3 - i,4 + 3 * i ));
  }
  poliedro.imprimeVertices();
  return 0;
}
