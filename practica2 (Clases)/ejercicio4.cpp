#include "Fecha.h"
#include <iostream>
using namespace std;

 Fecha::Fecha(int dd, int mm, int aaaa)
 {
   mes = mm;
   dia = dd;
   anio = aaaa;
 }
 void Fecha::inicializaFecha(int dd, int mm, int aaaa)
 {
   anio = aaaa;
   mes = mm;
   dia = dd;
   return;
 }

 void Fecha::muestraFecha()
 {
   cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
   return;
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

 void Fecha::setDia(int dd){dia = dd;}
 void Fecha::setMes(int mm){mes = mm;}
 void Fecha::setAnio(int aaaa){anio = aaaa;}

 int main()
 {
   Fecha a;
   bool resultado ;
   int total = 0;
   a.inicializaFecha(10,10,2000);
   for (int i = 1; i < 2019 ; i++){
     a.setAnio(i);
     resultado = a.leapyr();
     if (resultado == 1){
       total = total + 1;
     }
   }
   cout << "Hay: " <<  total  << " totales" << '\n';
 }
