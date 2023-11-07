#pragma once
#ifndef drzewo_H
#define drzewo_H
#include <iostream>

struct node
{
	node* lewo, * prawo;
	int klucz;
};

class Drzewo {
private:
	unsigned counter;

public:
	node* korzen;
	Drzewo() : korzen(NULL), counter(0) {}
	void DodajElementDoDrzewa(int klucz);
	char* ZwrocKlucze();
	unsigned ZwrocIloscElementow();
	void WyswietlDrzewo(node *w);
	void UsunElemntZDrzewa(int klucz);
	void UsunDrzewo(node * u);
	void SzukajDrogiDoPodanegoElemntu(int klucz);
};
#endif // !drzewo#pragma once

