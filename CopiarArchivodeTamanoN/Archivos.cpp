#include "Archivos.h"
#include <iostream>
#include <string>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <cstring>

using namespace std;

Archivo::Archivo(string nombre) : nombreArchivo(nombre),num_bytes(0){
    fd = open(nombre.c_str(), O_RDONLY);
}

Archivo::Archivo(string nombre,int banderas, mode_t modo) : nombreArchivo(nombre){
    fd = open(nombre.c_str(),modo,banderas);
}
Archivo::~Archivo(){
    close(fd);
}
size_t Archivo::lee(size_t nbytes){
    contenido = (char*)realloc(contenido,num_bytes+nbytes);
    size_t tamano = read(fd,contenido+num_bytes,nbytes);
    num_bytes = num_bytes + tamano;
    return tamano;
}

size_t Archivo::escribe(void *buffer, size_t nbytes){
    contenido = (char *)buffer;
    size_t escritos = write(fd,contenido,nbytes);
    num_bytes = nbytes;
    return escritos;
}
size_t Archivo::obtieneNum_bytes(){
    return num_bytes;
}

const char *Archivo::get_contenido(){
    return contenido;
}

char *Archivo::get_slide_contenido(size_t I, size_t F){
    memcpy(buffer,contenido+I,F);
    return buffer;
}

