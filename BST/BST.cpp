#include <iostream>
#include "BST.h"

using namespace std;

void drzewo::DodajElementDoDrzewa(int klucz)
{
    node* nowy = new node;

    nowy->lewo = NULL;
    nowy->prawo = NULL;
    nowy->klucz = klucz;
    if (!korzen)
    {
        korzen = nowy;
    }
    else
    {

        while (true)
        {
            if (klucz < korzen->klucz)
            {
                if (!korzen->lewo)
                {
                    korzen->lewo = korzen;
                    break;
                }
                else
                {
                    korzen = korzen->lewo;
                }
            }
            else
            {
                if (!korzen->prawo)
                {
                    korzen->prawo = korzen;
                    break;
                }
                else
                {
                    korzen = korzen->prawo;
                }
            }



        }
    }
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