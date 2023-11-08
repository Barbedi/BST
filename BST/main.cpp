#include <iostream>
#include "BST.h";
#include "Plik.h";

using namespace std;

int main() {
	Drzewo d1;
    Drzewo d2;
    Plik p1(&d1);
    Plik p2(&d2);

    int c;
    do {
        cout << endl;
        cout << "---Menu---" << endl;
        cout << "1. Dodaj element" << endl;
        cout << "2. Usun element" << endl;
        cout << "3. Usun cale drzewo" << endl;
        cout << "4. Szukaj drogi do elementu" << endl;
        cout << "5. Wyswietl drzewo" << endl;
        cout << "6. Wczytaj z pliku" << endl;
        cout << "7. Zapisz do pliku" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybierz opcje: ";
        cin >> c;

        int klucz = NULL;
        string nazwaPliku;
        switch (c) {
        case 1:
            cout << "Podaj wartosc do dodania: ";
            cin >> klucz;
            d1.DodajElementDoDrzewa(klucz);
            break;

        case 2:
            cout << "Podaj wartosc do usuniecia: ";
            cin >> klucz;
            d1.UsunElemntZDrzewa(klucz);
            break;

        case 3:
            d1.UsunDrzewo(d1.korzen);
            break;

        case 4:
            cout << "Podaj wartosc do znalezienia drogi: " << endl;
            cin >> klucz;
            d1.SzukajDrogiDoPodanegoElemntu(klucz);
            break;

        case 5:
            d1.WyswietlDrzewo(d1.korzen);
            break;

        case 6:
            cout << "Podaj nazwe pliku: ";
            cin >> nazwaPliku;
            cout << "Odczytywanie z pliku " << nazwaPliku << "..." << endl;
            p2.Wczytaj(nazwaPliku);
            break;

        case 7:
            cout << "Podaj nazwe pliku: ";
            cin >> nazwaPliku;
            cout << "Zapisywanie do pliku " << nazwaPliku << "..." << endl;
            p1.Zapisz(nazwaPliku);
            break;

        case 0:
            cout << "Zakonczono program." << endl;
            break;

        default:
            cout << "Nieprawidlowa opcja. Sprobuj ponownie." << endl;
            break;
        }
    } while (c != 0);
}