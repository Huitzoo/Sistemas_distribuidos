#include <iostream>
#include <math.h>
#include "Coordenada.h"


Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy)
{ }

double Coordenada::obtenerX(){
  return x;
}

double Coordenada::obtenerY(){
  return y;
}

void Coordenada::setMagnitud(double ma){
  magnitud = ma;
  return;
}

double Coordenada::getMagnitud(){
  return magnitud;
}