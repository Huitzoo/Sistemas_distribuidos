#include <iostream>
#include <string>
using namespace std;

int main () {
  string palabra = "";
  string cadenota = "";
  int palabras = 1800000;
  srand(5);
  for (int i = 0; i < palabras; i++) {
    for (int j = 0; j < 3; j++){
      int asciiVal = rand()%26+65;
      char asciiChar = asciiVal;
      palabra = palabra + asciiChar;
    }
    palabra.append(" ");
    cadenota.append(palabra);
  }
  cout << cadenota<<endl;
  int longitud = cadenota.length();
  int encontradas = 0;
  for (int i = 0; i < longitud; i++) {
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
