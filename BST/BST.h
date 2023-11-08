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
	unsigned ZwrocIloscElementow();
	void DodajElementDoDrzewa(int klucz);
	void WyswietlDrzewo();
	void WyswietlDrzewo(node *w);
	void UsunElemntZDrzewa(int klucz);
	void UsunDrzewo();
	void SzukajDrogiDoPodanegoElemntu(int klucz);
};
#endif // !drzewo#pragma once

