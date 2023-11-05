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
    
    unsigned counter;

public:
    void DodajElemntDoDrzewa(int klucz);
    void WyswietlDrzewo(node *w);
    void UsunElemntZDrzewa(int klucz);
    void UsunDrzewo(node * u);
    void SzukajDrogiDoPodanegoElemntu( int klucz);

node* korzen;

};

void drzewo::DodajElemntDoDrzewa(int klucz)
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
        node* aktualny = korzen;
        while (true)
        {
            if (klucz < aktualny->klucz)
            {
                if (!aktualny->lewo)
                {
                    aktualny->lewo = nowy;
                    break;
                }
                else
                {
                    aktualny = aktualny->lewo;
                }
            }
            else
            {
                if (!aktualny->prawo)
                {
                    aktualny->prawo = nowy;
                    break;
                }
                else
                {
                    aktualny = aktualny->prawo;
                }
            }
        }
    }
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


