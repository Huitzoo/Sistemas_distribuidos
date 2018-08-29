#include "Coordenada.h"
#include "Poligono.h"
#include <time.h>
#include <iostream>
#include <ctime>// include this header
using namespace std;


int main ()
{
  int vertices = 1 + rand()%55555;
  //int vertices = 0;
  Poligono p;
  int total_vertices = 0;
  double x = 0.0;
  double y = 0.0;
  //int poligonos = 10000;
  //vector<Poligono> v(poligonos); //vector de prueba
  p.agregarVertice(vertices);
  p.mostrarVertices();
  //cout << "Total vertices: "<< v[0].obtenerVertices() << endl;
  return 0;
}
