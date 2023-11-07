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
 
void drzewo::WyswietlDrzewo()
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
    node*UElemnt = korzen;
    while (UElemnt && UElemnt->klucz != klucz) {
        UElemnt = (klucz < UElemnt->klucz) ? UElemnt->lewo : UElemnt->prawo;
	}
    if (!UElemnt) {
        cout << "nie znaleziono elementu" << endl;
        return;
    }
    if (UElemnt->lewo && UElemnt->prawo)
    {
		node* temp = UElemnt->prawo;
        while (temp->lewo) {
			temp = temp->lewo;
		}
		UElemnt->klucz = temp->klucz;
		UElemnt = temp;
	}
    node* temp2 = UElemnt;
    UElemnt = (UElemnt->lewo) ? UElemnt->lewo : UElemnt->prawo;
    delete temp2;
    cout<< "usunieto element" << endl;




}

void drzewo::UsunDrzewo(){
    while (korzen!=NULL) {
        UsunElemntZDrzewa(korzen->klucz);
    }
}

void drzewo::SzukajDrogiDoPodanegoElemntu( int klucz)
{
    node *temp = korzen;
    while (temp != NULL) {
        if (klucz < temp->klucz)
        {
            cout<<"znaleziono element: "<<endl;
            break;
        }
        else if (klucz < temp->klucz)
        {
            cout << "L";
			temp = temp->lewo;
		}
		else  
		{
            cout << "P";
			temp = temp->prawo;
		}
        if (temp = NULL) {
           cout<<"nie znaleziono elementu"<<endl;
        }
		
    }

}



