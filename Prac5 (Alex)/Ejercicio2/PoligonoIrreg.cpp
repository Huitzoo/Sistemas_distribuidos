#include <iostream>
//#include "Coordenada.h"
#include "PoligonoIrreg.h"

using namespace std;

PoligonoIrreg::PoligonoIrreg(){}

void PoligonoIrreg::anadeVertice(Coordenada co){
  vertices.push_back(co);
}

void PoligonoIrreg::imprimeVertices(){
  for(int i = 0 ; i < vertices.size(); i++){
    cout << "X: " << vertices[i].obtenerX() << '\t';
    cout << "Y: " << vertices[i].obtenerY() << '\n';
    //cout << "/* message */" << '\n';
  }
}
