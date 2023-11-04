#include <iostream>
using namespace std;
struct node
{
    node* lewo, * prawo;
    int klucz;
};

class drzewo
{
private:
    node* korzen;
    unsigned counter;

public:
    void DodajElemntDoDrzewa(int klucz);
    void WyswietlDrzewo(node* korzen);
    void UsunElemntZDrzewa(int klucz);
    void UsunDrzewo(node* korzen);
    void SzukajDrogiDoPodanegoElemntu(node* korzen, int klucz);



};

void drzewo::DodajElemntDoDrzewa(int klucz)
{
}

void drzewo::WyswietlDrzewo(node* korzen)
{
}

void drzewo::UsunElemntZDrzewa(int klucz)
{
}

void drzewo::UsunDrzewo(node* korzen)
{
}

void drzewo::SzukajDrogiDoPodanegoElemntu(node* korzen, int klucz)
{
}
