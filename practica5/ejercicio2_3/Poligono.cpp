#include "Coordenada.h"
#include "Poligono.h"
#include <iostream>
#include <vector>
using namespace std;

int Poligono::total_vertices = 0;

Poligono::Poligono() {

}

void Poligono::agregarVerticePush(Coordenada c){
  vertices.push_back(c);
}

void Poligono::agregarVerticeReserve(int reservar){
  vertices.reserve(reservar);
  for (int i = 0; i < reservar; i++) {
    vertices[i] = Coordenada(1.3,34.9);
    /* code */
  }
}

void Poligono::mostrarVertices(){
  for (int i = 0; i < vertices.size(); i++) {
    cout << "Vertice: " << i << endl;
    cout << "X: " << vertices[i].obtenerX();
    cout << "Y: " << vertices[i].obtenerY();
    cout << "\n";
  }
}
int Poligono::obtenerVertices(){
  return total_vertices;
}
int Poligono::sumarVertices(int vertices){
  total_vertices = total_vertices + vertices;
}
