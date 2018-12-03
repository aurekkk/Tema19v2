#include "pch.h"
#include <iostream>
#include "Capitala.hpp"

void Capitala::display()
{
	Oras::display();
	std::cout << mNumePrefect;
}

Capitala::Capitala(char * Denumire, int Cod, long Nr_locuitori, int NrBlocuri, char * NumePrefect)
	:	Oras(Denumire, Cod, Nr_locuitori, NrBlocuri)
	,	mNumePrefect(NumePrefect)
{

}

Capitala::~Capitala()
{
	delete[] mNumePrefect;
}
