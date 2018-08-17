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
 int Fecha::convierte(){
   int resultado = 0;
   resultado = anio*10000+mes*100+dia;
   return resultado;
 }

 int main()
 {
   Fecha a;
   int resultado = 0;
   a.inicializaFecha(10,10,2010);
   resultado = a.convierte();
   cout << "resultado: " << resultado << '\n';
 }
