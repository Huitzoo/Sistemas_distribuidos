#include "Rectangulo.h"
#include "Coordenada.h"
#include <iostream>
using namespace std;


Rectangulo::Rectangulo ():superiorIzq (Coordenada(0,0)), inferiorDer (Coordenada(0,0))
{

}

Rectangulo::Rectangulo (Coordenada xx, Coordenada yy):superiorIzq (xx), inferiorDer (yy)
{

}


void Rectangulo::imprimeEsq ()
{
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << superiorIzq.obtenerX () << " y = " << superiorIzq.obtenerY () << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << inferiorDer.obtenerX () << " y = " << inferiorDer.obtenerY () << endl;
}

void Rectangulo::obtenerArea() {
  double alto, ancho;
  alto = superiorIzq.obtenerY ();
  inferiorDer.obtenerY();
  ancho = inferiorDer.obtenerX ();
  superiorIzq.obtenerX ();
  cout << "El área del rectángulo es = " << ancho * alto << endl;
}

Coordenada Rectangulo::obtieneSupIzq ()
{
  return superiorIzq;
}

Coordenada Rectangulo::obtieneInfDer ()
{
  return inferiorDer;
}
