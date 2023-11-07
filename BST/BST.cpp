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

char* drzewo::ZwrocKlucze()
{
    char * klucze = new char[counter];
    if (korzen)
    {
        for (size_t i = 0; i < counter; i++)
        {
            klucze[i] = korzen->klucz;
            if (korzen->lewo)
            {
				korzen = korzen->lewo;
			}
            else if (korzen->prawo)
            {
				korzen = korzen->prawo;
			}
            else
            {
				break;
			}
        }
	}
    else
    {
		cout << "Drzewo jest puste!" << endl;
	}
    return klucze;
}

void drzewo::WyswietlDrzewo(node*w)
{
    cout << w->klucz << ":Lewy =";
    if (w->lewo)
    {
		cout << w->lewo->klucz;
	}
    else
    {
		cout << "NULL";
	}
    cout << "Prawy =";
    if (w->prawo)
    {
		cout << w->prawo->klucz;
	}
    else
    {
		cout << "NULL";
	}
	cout << endl;
    if (w->lewo)
    {
		WyswietlDrzewo(w->lewo);
	}
    if (w->prawo)
    {
		WyswietlDrzewo(w->prawo);
	}
}


void drzewo::UsunElemntZDrzewa(int klucz)
{
    





}

void drzewo::UsunDrzewo(node * u)

{
    if (u)
    {
        UsunDrzewo(u->lewo);
        UsunDrzewo(u->prawo);
        delete u;
    }
}

void drzewo::SzukajDrogiDoPodanegoElemntu( int klucz)
{

}



