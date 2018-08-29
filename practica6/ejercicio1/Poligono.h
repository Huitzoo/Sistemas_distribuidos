#ifndef POLIGONO_H_
#define POLIGONO_H_
#include "Coordenada.h"
#include <vector>
using namespace std;

class Poligono{

  private:
    static int total_vertices;
    vector<Coordenada> vertices;

  public:
    Poligono();
    static int obtenerVertices();
    static int sumarVertices(int);
    void agregarVertice(int);
    void mostrarVertices();
};

#endif
