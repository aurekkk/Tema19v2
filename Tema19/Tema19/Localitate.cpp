#include "pch.h"
#include "Localitate.hpp"

Localitate::Localitate(char* Denumire, int Cod, long Nr_locuitori)
	:	mDenumire(Denumire)
	,	mCod(Cod)
	,	mNr_locuitori(Nr_locuitori)
{

}

Localitate::~Localitate()
{
	
}

void Localitate::display()
{
	std::cout << mDenumire << " " << mCod << " " << mNr_locuitori << " ";
}

std::istream& operator >>(std::istream & in, Localitate & localitate)
{
	in >> localitate.mCod;
	in >> localitate.mDenumire;
	in >> localitate.mNr_locuitori;
	return in;
}

std::ostream& operator<<(std::ostream & out, const Localitate & localitate)
{
	out << localitate.mCod;
	out << localitate.mDenumire;
	out << localitate.mNr_locuitori;
	return out;
}
