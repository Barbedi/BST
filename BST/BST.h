#pragma once
#ifndef drzewo_H
#define drzewo_H
#include <iostream>

struct node
{
	node* lewo, * prawo;
	int klucz;
};

class drzewo {
private:
	unsigned counter;

public:
	node* korzen;
	drzewo() : korzen(NULL), counter(0) {}
	void DodajElementDoDrzewa(int klucz);
	char* ZwrocKlucze();
	void WyswietlDrzewo(node *w);
	void UsunElemntZDrzewa(int klucz);
	void UsunDrzewo(node * u);
	void SzukajDrogiDoPodanegoElemntu(int klucz);
};
#endif // !drzewo#pragma once

