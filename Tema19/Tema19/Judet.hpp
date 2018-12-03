#pragma once
#include "Localitate.hpp"

class Judet {
protected:
	Localitate* mp;
	int mNrLoc;

public:
	Judet(Localitate* p, int NrLoc=0);
	~Judet();
};