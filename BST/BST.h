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
	node* korzen;
	unsigned counter;
public:
	drzewo() : korzen(NULL), counter(0) {}
	void DodajElementDoDrzewa(int klucz);
	void WyswietlDrzewo();
	void UsunElemntZDrzewa(int klucz);
	void UsunDrzewo();
	void SzukajDrogiDoPodanegoElemntu(int klucz);
};
#endif // !drzewo
