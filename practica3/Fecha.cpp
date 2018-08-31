//implementación
#include "Fecha.h"
#include <iostream>

using namespace std;

/*
Fecha::Fecha(int dd, int mm, int aaaa){
  mes = mm;
  dia = dd;
  anio = aaaa;
  //arreglo = new int[10000];
}*/

Fecha::Fecha(int dd, int mm, int aaaa) : dia(dd), mes(mm), anio(aaaa){
  unsigned int numeroElementos = 1000000000;
  arreglo = new int[numeroElementos];
  if (!arreglo)
    exit(1);
  if(((1 > dia) || (dia > 31)) && ((0 > anio) || (anio > 2019))){
    cout << "Fecha ilegal!\n";
    setDia(-1);
    setMes(-1);
    setAnio(-1);
  }
  else if((0 > anio) || (anio > 2018)){
    cout << "Valor ilegal para el año!\n";
    setDia(-1);
    setMes(-1);
    setAnio(-1);
  }
  else if((1 > dia) || (dia > 31)){
    cout << "Valor ilegal para el día!\n";
    setDia(-1);
    setMes(-1);
    setAnio(-1);
  }
}

Fecha::~Fecha(){
  if(arreglo)
    delete[] arreglo;
}

void Fecha::setAnio(int aaaa){
  anio = aaaa;
  return;
}

void Fecha::setMes(int mm){
  mes = mm;
  return;
}

void Fecha::setDia(int dd){
  dia = dd;
  return;
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa){
  anio = aaaa;
  mes = mm;
  dia = dd;
  return;
}

void Fecha::muestraFecha(){
  cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
  return;
}

int Fecha::convierte(){
  return anio * 10000 + mes * 100 + dia;
}

bool Fecha::leapyr(){
  if (anio % 400 == 0){
    return true;
  }
  if (anio % 4 == 0 && anio % 100 != 0){
    return true;
  };
  return false;
}
