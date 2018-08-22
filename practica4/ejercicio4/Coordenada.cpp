#include "Rectangulo.h"
#include "Coordenada.h"
#include "math.h"
#include <iostream>
using namespace std;


Coordenada::Coordenada(double radio, double angulo):radio (radio), angulo (angulo)
{
  convertirCoordenadas();
}

void Coordenada::convertirCoordenadas (){
  x = radio * cos(angulo);
  y = radio * sin(angulo);
}

double Coordenada::obtenerX ()
{
  return x;
}

double Coordenada::obtenerY ()
{
  return y;
}
