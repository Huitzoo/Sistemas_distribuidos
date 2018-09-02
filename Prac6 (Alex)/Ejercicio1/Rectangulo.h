#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Coordenada.h"

class Rectangulo{
  private:
    Coordenada superiorIzq;
    Coordenada inferiorDer;
  public:
    Rectangulo();
    Rectangulo(Coordenada suIzq, Coordenada inDer);
    void imprimeEsq();
    Coordenada obtieneSupIzq();
    Coordenada obtieneInfDer();
    void obtieneArea();
};

#endif
