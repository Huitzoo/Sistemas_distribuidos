#include <iostream>
#include <math.h>
#include "Coordenada.h"

/*
Coordenada::Coordenada(double r, double teta) : x(r*cos(teta)), y(r*sin(teta))
{ }*/

Coordenada::Coordenada(double r, double teta){
  x = r * cos(teta);
  y = r * sin(teta);
}

double Coordenada::obtenerX(){
  return x;
}

double Coordenada::obtenerY(){
  return y;
}
