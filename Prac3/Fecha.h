//interfaz
#ifndef FECHA_H_
#define FECHA_H_

class Fecha{
  private:
    int dia;
    int mes;
    int anio;
    int * arreglo;
  public:
    Fecha(int = 22, int = 8, int = 2018); // Declara constructor
    ~Fecha(); //Destructor
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    void inicializaFecha(int, int, int);
    void muestraFecha();
    int convierte();
    bool leapyr();
};

#endif
