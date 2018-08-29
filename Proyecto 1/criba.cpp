#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "Primo.h"




using namespace std;
vector<Primo> primos;

int main(int argc, char ** argv) {
	int N = 0;
	if(argc != 2)
		cin >> N;
	else
		N = atoi(argv[1]);
	for(int i = 0; i <= N; i++){
		primos.push_back(Primo(i));
	}
	for(int i = 2; i < N; i++){
		for(int j = 2; j * i < N ; j++){
			primos[i * j].setPrimo(false);
		}
	}
	for(int i = 1; i < N; i++){
		if(primos[i].esPrimo())
			cout << primos[i].getValor() << " " ;
	}
	cout << endl;
}
Primo::Primo(int valor) : _valor(valor) { 
	_esPrimo = true;
}

Primo::Primo() { 
	_esPrimo = true;
}

void Primo::setValor(int valor) { 
	_valor = valor; 
}

int Primo::getValor() { 
	return _valor; 
}

void Primo::setPrimo(bool esPrimo) { 
	_esPrimo = esPrimo; 
}

bool Primo::esPrimo() { 
	return _esPrimo; 
}
