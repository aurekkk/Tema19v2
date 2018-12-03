// Tema19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Localitate.hpp"
#include "Oras.hpp"
#include "Capitala.hpp"
#include "Judet.hpp"
#include <vector>
#include <string>


int main()
{
	
	char s1[] = "asdasd";
	char * s = s1;
	std::vector<Localitate*>loc;
	std::vector<Oras*>oras;
	std::vector<Capitala*>capitala;
	std::vector<Judet*>judet;
	int n;
	std::cout << "n="; std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int cod;
		std::cout << "cod=";
		std::cin >> cod;

		loc.push_back(new Localitate(s, cod, cod));

	}


	for (int i = 0; i < n; i++)
	{
		int cod;
		std::cout << "cod=";
		std::cin >> cod;

		oras.push_back(new Oras(s, cod, cod, cod));

	}

	for (int i = 0; i < n; i++)
	{
		int cod;
		std::cout << "cod=";
		std::cin >> cod;

		capitala.push_back(new Capitala(s, cod, cod, cod, s));

	}

	std::vector<Localitate*>locv2;
	
	for (int i = 0; i < n; i++)
	{
		locv2.push_back(loc[i]);
		locv2.push_back(oras[i]);
		locv2.push_back(capitala[i]);
	}
	/*
	for (unsigned i = 0; i < locv2.size(); i++)
	{
		if (typeid(*locv2[i]) == typeid(Oras)) {
			std::cout << "Oras";
			std::cout << std::endl;
			locv2[i]->display(); std::cout << std::endl;
		}

		if (typeid(*locv2[i]) == typeid(Localitate)) {
			std::cout << "Localitatea";
			std::cout << std::endl;
			locv2[i]->display(); std::cout << std::endl;
		}

		if (typeid(*locv2[i]) == typeid(Capitala)) {
			std::cout << "Capitala";
			std::cout << std::endl;
			locv2[i]->display(); std::cout << std::endl;
		}
	}
	*/

	for (int i = 0; i < n; i++)
	{
		int nrloc;
		std::cout << "nrloc=";
		std::cin >> nrloc;
		judet.push_back(new Judet(loc[i], nrloc));
	}

	for (unsigned i = 0; i < judet.size(); i++)
	{
		judet[i]->display();
	}
}
