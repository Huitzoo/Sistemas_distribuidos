#ifndef ARCHIVOS_H_
#define ARCHIVOS_H_
#include <string>
#include <iostream>
#include <fstream>
#include <fcntl.h>

using namespace std;

class Archivo
{

private:
    string nombreArchivo;
    int fd;
    char *contenido = NULL;
    char buffer[1000];
    size_t num_bytes;

public:
    Archivo(string filename);
    Archivo(string filename, int banderas, mode_t modo);
    size_t lee(size_t nbytes);
    size_t escribe(void *buffer, size_t nbytes);
    size_t obtieneNum_bytes();
    void voltear_archivo();
    const char *get_contenido();
    char *get_slide_contenido(size_t,size_t);
    ~Archivo();
};

#endif