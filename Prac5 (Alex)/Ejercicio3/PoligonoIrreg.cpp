#include <iostream>
#include "PoligonoIrreg.h"

using namespace std;

int PoligonoIrreg::totalVertices = 0;

PoligonoIrreg::PoligonoIrreg(){}

int PoligonoIrreg::getTotalVertices(){
  return totalVertices;
}

void PoligonoIrreg::anadeVertice(Coordenada co){
  //cout << "Antes de push: " << vertices.capacity() << endl;
  vertices.push_back(co);
  //cout << "Después de push: " << vertices.capacity() << endl;
  totalVertices++;
}

void PoligonoIrreg::imprimeVertices(){
  for(int i = 0 ; i < vertices.size(); i++){
    cout << "X: " << vertices[i].obtenerX() << '\t';
    cout << "Y: " << vertices[i].obtenerY() << '\n';
  }
}
