#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main () {
  string palabra = "";
  string cadenota = "";
  //int palabras = 10;
  srand(time(NULL));
  int palabras = 0;
  cout << "Numero: " << '\n';
  cin >> palabras;
  for (int i = 0; i < palabras; i++) {
    for (int j = 0; j < 3; j++){
      int asciiVal = rand()%26+65;
      char asciiChar = asciiVal;
      palabra+=asciiChar;
    }
    palabra+=' ';
    cadenota.append(palabra);
    palabra = "";
  }
  int encontradas = 0;
  for (int i = 0; i < cadenota.size() ; i++) {
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
