#include "pch.h"
#include <iostream>
#include "Judet.hpp"

Judet::Judet(Localitate * p, int NrLoc)
	:	mp(p)
	,	mNrLoc(NrLoc)
{

}

Judet::~Judet()
{
	delete[] mp;
}

void Judet::display()
{
	std::cout << "Localitatea ";
	mp->display();
	std::cout << " cu nr de locuitori ";
	std::cout <<  mNrLoc;
}

