#pragma once
#include "Localitate.hpp"

class Oras: public Localitate {
protected:
	int mNrBlocuri;

public:
	Oras(char * Denumire = nullptr, int Cod = 0, long Nr_locuitori = 0, int NrBlocuri=0);
	~Oras();
	void display();
	std::vector<Localitate*>l;
};