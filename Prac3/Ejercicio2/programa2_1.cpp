#include "Fecha.h"
#include <iostream>
#include <unistd.h>

using namespace std;

int masViejaRef(Fecha &fecha1, Fecha& fecha2);
int masVieja(Fecha fecha1, Fecha fecha2);
int masViejaC(Fecha *fecha1, Fecha *fecha2);

int main(){
  Fecha a, b;
  int i = 0;
  while(i < 5000000){
    //limite_inferior + rand() % (limite_superior +1 - limite_inferior)
    a.inicializaFecha(1 + rand() % (31 + 1 - 1), 1 + rand() % (12 + 1 - 1), 1 + rand() % (2018 + 1 - 1));
    b.inicializaFecha(1 + rand() % (31 + 1 - 1), 1 + rand() % (12 + 1 - 1), 1 + rand() % (2018 + 1 - 1));
    //masVieja(a,b);
    masViejaRef(a,b);
    //masViejaC(&a,&b);
    i++;
  }
  sleep(7);
  return 0;
}

int masVieja(Fecha fecha1, Fecha fecha2){
  if(fecha1.convierte() > fecha2.convierte()){
    return 1;
  }
  else if (fecha1.convierte() == fecha2.convierte()){
    return 0;
  }
  else if(fecha1.convierte() < fecha2.convierte()){
    return -1;
  }
  else
    return -2312515;
}

int masViejaRef(Fecha &fecha1, Fecha &fecha2){
  if(fecha1.convierte() > fecha2.convierte()){
    return 1;
  }
  else if (fecha1.convierte() == fecha2.convierte()){
    return 0;
  }
  else if(fecha1.convierte() < fecha2.convierte()){
    return -1;
  }
  else
    return -2312515;

}

int masViejaC(Fecha *fecha1, Fecha *fecha2){
  if(fecha1->convierte() > fecha2->convierte()){
    return 1;
  }
  else if (fecha1->convierte() == fecha2->convierte()){
    return 0;
  }
  else if(fecha1->convierte() < fecha2->convierte()){
    return -1;
  }
  else
    return -2312515;
}
