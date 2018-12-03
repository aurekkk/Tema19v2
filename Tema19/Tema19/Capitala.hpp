#pragma once
#include "Oras.hpp"


class Capitala: public Oras {
protected:
	char * mNumePrefect;

public:
	void display();
	Capitala(char * Denumire = nullptr, int Cod = 0, long Nr_locuitori = 0, int NrBlocuri = 0, char * NumePrefect=nullptr);
	~Capitala();

	std::vector<Localitate*>l;
};