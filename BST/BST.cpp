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
    void WyswietlDrzewo();
    void UsunElemntZDrzewa(int klucz);
    void UsunDrzewo(node * u);
    void SzukajDrogiDoPodanegoElemntu( int klucz);



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
		
        while (true)
        {
            if (klucz < korzen->klucz)
            {
                if (!korzen->lewo)
                {
					korzen->lewo=korzen;
                    break;
				}
                else
                {
					korzen=korzen->lewo;
				}
			}
            else  
            {
                if (!korzen->prawo)
                {
					korzen ->prawo=korzen;
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

void drzewo::WyswietlDrzewo()
{
   
}


void drzewo::UsunElemntZDrzewa(int klucz)
{
    //uswanie elemtu z drzewa





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

