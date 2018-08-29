#ifndef NUMEROSRAND_H
#define NUMEROSRAND_H

class NumerosRand{
  private:
    int *arreglo;
    unsigned int numeroElementos;
  public:
    NumerosRand(unsigned int num);
    ~NumerosRand(); // Destructor
    void inicializaNumerosRand(void);
};

#endif
