#include "Fecha.h"
#include <iostream>

using namespace std;

/*
Fecha::Fecha(int dd, int mm, int aaaa){
  mes = mm;
  dia = dd;
  anio = aaaa;
}*/

Fecha::Fecha(int dd, int mm, int aaaa) : dia(dd), mes(mm), anio(aaaa){
 if(((1 > dia) || (dia > 31)) && ((0 > anio) || (anio > 2019))){
 cout << "Fecha ilegal!\n";
 exit(1);
 }
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
  return anio*10000+mes*100+dia;
}

bool Fecha::leapyr(){
  int resultado = 0;
  if (anio%400 == 0){
    return true;
  }
  if (anio%4==0 && anio%100 != 0){
    return true;
  };
  return false;
}
