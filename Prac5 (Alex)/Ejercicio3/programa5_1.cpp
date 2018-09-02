#include <iostream>
#include "PoligonoIrreg.h"

using namespace std;

int main(){
  int num_vertices = 0;
  int num_poligonos = 10000000;
  vector<PoligonoIrreg> poligono;
  //poligono.reserve(num_poligonos);
  for(int j = 0; j < num_poligonos ;j++){
    poligono.push_back(PoligonoIrreg());
    num_vertices = rand() % 100;
    for(int i = 0; i < num_vertices; i++){
      poligono[j].anadeVertice(Coordenada(4 + num_vertices, 5 + 2 * num_vertices));
    }
  }
  //cout << poligono.size() << '\n';
  /*
  for(int i = 0; i < poligono.size(); i++){
    cout << "Empieza poligono: " << '\n';
    poligono[i].imprimeVertices();
    cout <<'\n';
  }*/
  //cout << poligono.capacity() << '\n';
  //cout << "Total de vertices: " << poligono[poligono.size()].getTotalVertices() << '\n';
  return 0;
}
