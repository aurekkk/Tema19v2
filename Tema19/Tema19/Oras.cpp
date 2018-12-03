#include "pch.h"
#include <iostream>
#include "Oras.hpp"

Oras::Oras(char * Denumire, int Cod, long Nr_locuitori, int NrBlocuri)
	: Localitate(Denumire, Cod, Nr_locuitori)
	, mNrBlocuri(NrBlocuri)
{

}

Oras::~Oras()
{

}

void Oras::display()
{
	Localitate::display();
	std::cout << mNrBlocuri;
}
