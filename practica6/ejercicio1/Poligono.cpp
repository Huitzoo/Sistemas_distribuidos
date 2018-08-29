#include "Coordenada.h"
#include "Poligono.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include "math.h"
using namespace std;

int Poligono::total_vertices = 0;

Poligono::Poligono() {

}


void Poligono::agregarVertice(int numero){
  //vertices.reserve(numero);
  double x = 0.0;
  double y = 0.0;
  for (int i = 0; i < numero; i++) {
    x = round(((double)(-100.000+(double)(rand()%101)) + (double)rand()/100.0)*1000.0)/1000.0;
    y = round(((double)(-100.000+(double)(rand()%101)) + (double)rand()/100.0)*1000.0)/1000.0;
    vertices.push_back(Coordenada(x,y));
  }
  cout << vertices[100].obtenerX();
}

void Poligono::mostrarVertices(){
  vector<Coordenada>::iterator i;
  for (i = vertices.begin(); i != vertices.end() ; i++) {
    cout <<  "X: " << setprecision(3) << i->obtenerX();
    cout << " Y: " << setprecision(3) << i->obtenerY() << endl;
    cout << "Magnitud: " << sqrt(pow(i->obtenerX(),2)+pow(i->obtenerY(),2))<<"\n";
  }
}
int Poligono::obtenerVertices(){
  return total_vertices;
}
int Poligono::sumarVertices(int vertices){
  total_vertices = total_vertices + vertices;
}
