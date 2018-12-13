#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sstream>
#include "Archivos.h"

using namespace std;
char buffer[BUFSIZ];

int main(int argc, char const *argv[]){
    string nombre = argv[1];
    string nombreS = argv[2];
    Archivo archivo2(nombre);
    int bandera = 0;
    size_t filetam = 0;
    while(bandera == 0){
        filetam = archivo2.lee(sizeof(buffer));
        if(filetam < sizeof(buffer)){
            bandera = 1;
        }
    }
    const char *archivo = archivo2.get_contenido();
    size_t tamano = archivo2.obtieneNum_bytes();
    Archivo archivo1(nombreS, 0777, O_CREAT|O_WRONLY);
    size_t escritos = archivo1.escribe((void *)archivo,tamano);
    cout << escritos << endl;
    cout << tamano << endl;
}
