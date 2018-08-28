#ifndef __Primo_H__
#define __Primo_H__

class Primo {
	private:
		int _valor;
		bool _esPrimo;
	public:
		Primo(int valor);
		Primo();
		void setValor(int valor);
		void setPrimo(bool esPrimo);
		bool esPrimo();
		int getValor();
};

#endif
