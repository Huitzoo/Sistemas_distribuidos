#include <iostream>
using namespace std;
class Fecha
{
  private:
    int dia;
    int mes;
    int anio;

  public:
   Fecha(int = 3, int = 4, int = 2014);
   void inicializaFecha(int, int, int);
   void muestraFecha();
   int getDia();
   int getMes();
   int getAnio();
   void setDia(int);
   void setMes(int);
   void setAnio(int);
 };

 Fecha::Fecha(int dd, int mm, int aaaa)
 {
   mes = mm;
   dia = dd;
   anio = aaaa;
 }
 int Fecha::getDia(){return dia;}
 int Fecha::getMes(){return mes;}
 int Fecha::getAnio(){return anio;}
 void Fecha::setDia(int dd){dia = dd;}
 void Fecha::setMes(int mm){mes = mm;}
 void Fecha::setAnio(int aaaa){anio = aaaa;}

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

 int main()
 {
   Fecha a, b, c(21, 9, 1973);
   b.inicializaFecha(17, 6 , 2000);
   a.muestraFecha();
   b.muestraFecha();
   c.muestraFecha();
   a.setDia(10);
   cout << "EL día de a es: " << a.getDia() << endl;
 }
