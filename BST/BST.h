#pragma once
#ifndef drzewo_H
#define drzewo_H

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
	void DodajElementDoDrzewa(int klucz);
	void WyswietlDrzewo(node* korzen);
	void UsunElemntZDrzewa(int klucz);
	void UsunDrzewo(node* korzen);
	void SzukajDrogiDoPodanegoElemntu(node* korzen, int klucz);
};
#endif // !drzewo
