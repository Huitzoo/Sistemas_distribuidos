#include "Coordenada.h"
#include "Poligono.h"
#include <time.h>
#include <iostream>
using namespace std;


int main ()
{
  //Poligono p;
  //int poligonos = rand();
  int vertices = 0;
  int total_vertices = 0;
  int poligonos = 10000;
  vector<Poligono> v(poligonos); //vector de prueba
  //cout << poligonos;
  int start_s=clock();
	// the code you wish to time goes here
  for (int i = 0; i < poligonos; i++) {
    vertices = 4+rand()%55555;
    //total_vertices = total_vertices + vertices;
    //formula para obtener rangos de random
    // variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    v[i].sumarVertices(vertices);
    v[i].agregarVerticeReserve(vertices);
    //for (int j = 0; j < vertices; j++) {
      //v[i].agregarVerticePush(Coordenada(1.3,34.9));
      //v[i].mostrarVertices();
    //}
  }
  int stop_s=clock();
  cout << "Tiempo: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
  cout << "Total vertices: "<< v[0].obtenerVertices() << endl;
  return 0;
}
