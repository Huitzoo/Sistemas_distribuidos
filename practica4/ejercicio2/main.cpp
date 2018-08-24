#include "Rectangulo.h"
#include "Coordenada.h"
#include <iostream>
using namespace std;

int main ()
{
  Rectangulo rectangulo1 (Coordenada(2,3),Coordenada(5,1));
  double ancho, alto;
  /*cout <<"Calculando el área de un rectángulo dadas sus coordenadas en un planocartesiano:\n";
  */
  rectangulo1.imprimeEsq ();
  rectangulo1.obtenerArea();
  return 0;
}
