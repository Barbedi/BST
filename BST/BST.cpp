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


void drzewo::UsunElemntZDrzewa(int klucz) {
    node* temp = korzen;
    node* parent = NULL;

    
    while (temp != NULL && klucz != temp->klucz) {
        parent = temp;
        temp = (klucz < temp->klucz) ? temp->lewo : temp->prawo;
    }
    if (temp == NULL) {
        cout << "Nie znaleziono elementu" << endl;
        return;
    }

    // Przypadek 1: Węzeł nie ma dzieci
    if (temp->lewo == NULL && temp->prawo == NULL) {
        if (parent == NULL) {
            korzen = NULL;
        }
        else if (parent->lewo == temp) {
            parent->lewo = NULL;
        }
        else {
            parent->prawo = NULL;
        }
        delete temp;
    }
    // Przypadek 2: Węzeł ma jedno dziecko
    else if (temp->lewo != NULL) {
        if (parent == NULL) {
            korzen = temp->lewo;
        }
        else if (parent->lewo == temp) {
            parent->lewo = temp->lewo;
        }
        else {
            parent->prawo = temp->lewo;
        }
        delete temp;
    }
    else if (temp->prawo != NULL) {
        if (parent == NULL) {
            korzen = temp->prawo;
        }
        else if (parent->lewo == temp) {
            parent->lewo = temp->prawo;
        }
        else {
            parent->prawo = temp->prawo;
        }
        delete temp;
    }
    // Przypadek 3: Węzeł ma oba dzieci
    else {
        node* temp2 = temp->prawo;
        node* parent2 = temp;
        while (temp2->lewo != NULL) {
            parent2 = temp2;
            temp2 = temp2->lewo;
        }
        temp->klucz = temp2->klucz;
        if (parent2->lewo == temp2) {
            parent2->lewo = temp2->prawo;
        }
        else {
            parent2->prawo = temp2->prawo;
        }
        delete temp2;
    }
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
        if (klucz == temp->klucz)
        {
			cout << "Znaleziono element" << endl;
			break;
            
        }
        else if (klucz < temp->klucz)
        {
            cout << "L" << endl;
			temp = temp->lewo;
		}
		else  
		{
            cout << "P"<<endl;
			temp = temp->prawo;
		}
        if (temp ==NULL) {
           cout<<"nie znaleziono elementu"<<endl;
        }
		
    }

}



