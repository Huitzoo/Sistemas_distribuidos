#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada{
  private:
    double x;
    double y;
  public:
    Coordenada(double r, double teta);
    double obtenerX();
    double obtenerY();
};

#endif
