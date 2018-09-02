#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada{
  private:
    double x;
    double y;
    double magnitud;
  public:
    Coordenada(double xx, double yy);
    double obtenerX();
    double obtenerY();
    void setMagnitud(double);
    double getMagnitud();
};

#endif
