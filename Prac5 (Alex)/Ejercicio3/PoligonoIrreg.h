#ifndef POLIGONOIRREG_H
#define POLIGONOIRREG_H

#include <vector>
#include "Coordenada.h"

using namespace std;

class PoligonoIrreg{
  private:
    vector<Coordenada> vertices;
    static int totalVertices;
  public:
    PoligonoIrreg();
    void anadeVertice(Coordenada co);
    void imprimeVertices();
    int getTotalVertices();
};

#endif
