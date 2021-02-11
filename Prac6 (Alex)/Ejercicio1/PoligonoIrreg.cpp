#include <iostream>
#include <math.h>
#include "PoligonoIrreg.h"

using namespace std;

int PoligonoIrreg::totalVertices = 0;

PoligonoIrreg::PoligonoIrreg(){}

int PoligonoIrreg::getTotalVertices(){
  return totalVertices;
}

void PoligonoIrreg::anadeVertice(int num_vertices){
  vertices.reserve(num_vertices);
  srand(time(NULL));
  for(int i = 0; i < num_vertices; i++){
    double x = (rand() % 200 - 100) + (rand() % 1000) / 1000.0;
    double y = (rand() % 200 - 100) + (rand() % 1000) / 1000.0;
    vertices.push_back(Coordenada(x, y));
    vertices[i].setMagnitud(sqrt(vertices[i].obtenerX() * vertices[i].obtenerX() + vertices[i].obtenerY() * vertices[i].obtenerY()));
    totalVertices++;
  }
}

void PoligonoIrreg::imprimeVertices(){
  vector<Coordenada>::iterator i;
  for(i = vertices.begin() ; i != vertices.end(); i++){
    cout << "X: " << i->obtenerX() << '\t';
    cout << "Y: " << i->obtenerY() << '\t';
    cout << "Magnitud: " << i -> getMagnitud() << endl;
  }
}
