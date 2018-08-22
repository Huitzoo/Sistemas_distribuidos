#ifndef COORDENADA_H_
#define COORDENADA_H_

class Coordenada
{
  private:
    double x;
    double y;
    double radio;
    double angulo;

  public:
    Coordenada(double = 0, double = 0);
    void convertirCoordenadas();
    double obtenerX ();
    double obtenerY ();
};

#endif
