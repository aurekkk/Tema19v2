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
	
	/*char s1[] = "asdasd";
	char * s = s1;

	Localitate l(s, 2, 2);
	Judet j(new Localitate(s, 2, 2), 2);
	std::vector<Localitate*>loc;
	std::vector<Oras*>oras;
	std::vector<Capitala*>capitala;
	loc.push_back(new Localitate (s, 2, 2));
	loc[0]->display();
	std::cout<<std::endl;

	loc.push_back(new Oras(s, 2, 2, 2));
	loc[1]->display();
	std::cout << std::endl;

	loc.push_back(new Capitala(s, 2, 2, 2, s));
	loc[2]->display();
	std::vector<Judet*> judet;
	judet.push_back(new Judet(new Localitate(s, 2, 2), 2));
	std::cout << std::endl;
	if (typeid(j) == typeid(Localitate)) { std::cout<< "obiectul l este de tip localitate"; }
	else std::cout << "mue";
	
	int n;
	std::cout << "n="; std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int cod;
		std::cout << "cod=";
		std::cin >> cod;

		Localitate LocNoua(s, cod, cod);
		loc.push_back(&LocNoua);

	}

	for (int i = 0; i < n; i++)
	{
		int cod;
		std::cout << "cod=";
		std::cin >> cod;

		Oras OrasNou(s, cod, cod, cod);
		oras.push_back(&OrasNou);

	}

	for (int i = 0; i < n; i++)
	{
		int cod;
		std::cout << "cod=";
		std::cin >> cod;

		Capitala CapNoua(s, cod, cod, cod, s);
		capitala.push_back(&CapNoua);

	}

	std::vector<Localitate*>locv2;
	
	for (int i = 0; i < n; i++)
	{
		locv2.push_back(loc[i]);
		locv2.push_back(oras[i]);
		locv2.push_back(capitala[i]);
	}
	for (int i = 0; i < locv2.size(); i++)
	{
		locv2[i]->display();
	}
	*/
}
