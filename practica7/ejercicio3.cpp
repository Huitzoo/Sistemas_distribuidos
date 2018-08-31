#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

int main () {
  //int palabras = 1000000;
  char *cadenota = NULL;
  //char *cadenota = (char*)malloc(5);
  char *palabra = (char*)malloc(4);
  int tamano = 0;
  int palabras = 0;
  cout << "Numero: " << '\n';
  cin >> palabras;
  srand(time(NULL));
  for (int i = 1; i < palabras; i++) {
    for (int j = 0; j < 3; j++){
      int asciiVal = rand()%26+65;
      char asciiChar = asciiVal;
      palabra[j] = asciiChar;
    }
    palabra[3] = ' ';
    cadenota = (char*)realloc(cadenota,i*4);
    memcpy(cadenota+tamano,palabra,4);
    tamano += 4;
  }
  int encontradas = 0;
  for (int i = 0; i < strlen(cadenota) ; i++) {
    if(cadenota[i] == 'I'){
      i += 1;
      if(cadenota[i] == 'P'){
        i += 1;
        if(cadenota[i] == 'N'){
          encontradas+=1;
        }
      }
    }
  }
  cout << "IPN: " << encontradas << endl;
}
