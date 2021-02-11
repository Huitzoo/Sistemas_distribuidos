#include <iostream>
#include "NumerosRand.h"

using namespace std;

NumerosRand::NumerosRand(unsigned int num){
  numeroElementos = num;
  arreglo = new int[numeroElementos];
}

NumerosRand::~NumerosRand(){
  delete[] arreglo;
}

void NumerosRand::inicializaNumerosRand(){
  unsigned int i;
  for(i = 0; i < numeroElementos; i++)
  arreglo[i] = rand();
  return;
}
