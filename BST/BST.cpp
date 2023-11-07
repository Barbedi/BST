#include <iostream>

#include "BST.h"

using namespace std;

void drzewo::DodajElementDoDrzewa(int klucz)
{
    node* nowy = new node;

    nowy->lewo = NULL;
    nowy->prawo = NULL;
    nowy->klucz = klucz;
    if (korzen==NULL)
    {
        korzen = nowy;
    }
    else
    {
        node* temp = korzen;
        while (temp != NULL) {
            if (klucz < temp->klucz)
            {
                if (temp->lewo == NULL)
                {
					temp->lewo = nowy;
					break;
				}
                else
                {
					temp = temp->lewo;
				}
			}
            else
            {
                if (temp->prawo == NULL)
                {
					temp->prawo = nowy;
					break;
				}
                else
                {
					temp = temp->prawo;
				}
			}
        }
    }
}
 
void drzewo::wyswietl()
{
	WyswietlDrzewo(korzen);
}
void drzewo::WyswietlDrzewo(node* w)
{
    if (w != NULL) {
        WyswietlDrzewo(w->lewo);
        cout << w->klucz << " ";
        WyswietlDrzewo(w->prawo);
    }
}


void drzewo::UsunElemntZDrzewa(int klucz)
{
    





}

void drzewo::UsunDrzewo(node * u)
{
    while (korzen) {
        UsunDrzewo(korzen->lewo);
		UsunDrzewo(korzen->prawo);
		delete korzen;
		korzen = NULL;
    }
}

void drzewo::SzukajDrogiDoPodanegoElemntu( int klucz)
{

}



