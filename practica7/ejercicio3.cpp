#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

int main () {
  int palabras = 100;
  char *cadenota = NULL;
  //char *cadenota = (char*)malloc(palabras*sizeof(palabras));
  char *palabra = (char*)malloc(4);
  int tamano = 0;
  srand(time(NULL));
  for (int i = 1; i < palabras; i++) {
    for (int j = 0; j < 3; j++){
      int asciiVal = rand()%26+65;
      char asciiChar = asciiVal;
      palabra[j] = asciiChar;
    }
    //cout << sizeof(palabra) << endl;
    cout << tamano << endl;
    //cout << sizeof(palabra)*i << endl;
    cadenota = (char*)realloc(cadenota,i*8);
    //cout << sizeof(cadenota) << endl;
    memcpy(&cadenota[tamano],palabra,8);
    tamano += sizeof(palabra);
  }
  int longitud = strlen(cadenota);
  cout << cadenota << endl;
  int encontradas = 0;
  for (int i = 0; i < longitud+1; i++) {
    if(cadenota[i] == 'I'){
      if(cadenota[i] == 'P'){
        if(cadenota[i] == 'N'){
          encontradas++;
        }
      }
    }
  }
  cout << "IPN: " << encontradas << endl;
}
