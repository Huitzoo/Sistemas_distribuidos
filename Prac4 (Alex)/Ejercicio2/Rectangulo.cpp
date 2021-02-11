#include <iostream>
#include "Rectangulo.h"
#include "Coordenada.h"

using namespace std;

Rectangulo::Rectangulo() : superiorIzq(0,0), inferiorDer(0,0){ }

Rectangulo::Rectangulo(Coordenada suIzq, Coordenada inDer):superiorIzq(suIzq), inferiorDer(inDer){ }

void Rectangulo::imprimeEsq(){
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << endl;
}

Coordenada Rectangulo::obtieneSupIzq(){
  return superiorIzq;
}

Coordenada Rectangulo::obtieneInfDer(){
  return inferiorDer;
}
