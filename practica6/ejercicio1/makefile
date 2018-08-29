
main: main.cpp Poligono.o
	g++ main.cpp Poligono.o Coordenada.o -o main

Poligono.o: Poligono.cpp Coordenada.o Poligono.h
	g++ Poligono.cpp -c

Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c
