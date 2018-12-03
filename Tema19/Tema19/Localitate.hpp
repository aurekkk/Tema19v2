#pragma once
#include<iostream>
#include<string>
#include<vector>

class Localitate {

protected:
	std::string mDenumire;
	int mCod;
	long mNr_locuitori;
public:
	Localitate(char* Denumire = nullptr, int Cod = 0, long Nr_locuitori = 0);
	virtual ~Localitate();
	virtual void display();
	friend std::istream& operator >> (std::istream& in, Localitate & localitate);
	friend std::ostream& operator << (std::ostream& out, const Localitate & localitate);
};
