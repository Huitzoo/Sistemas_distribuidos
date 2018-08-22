#include "Rectangulo.h"
#include "Coordenada.h"
#include <iostream>
using namespace std;

int main ()
{
  Rectangulo rectangulo1 (Coordenada(3.61,0.98),Coordenada(5.10,0.20));
  double ancho, alto;
  /*cout <<"Calculando el área de un rectángulo dadas sus coordenadas en un planocartesiano:\n";
  */
  rectangulo1.imprimeEsq ();
  rectangulo1.obtenerArea();
  return 0;
}
