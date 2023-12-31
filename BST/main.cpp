#include <iostream>
#include "BST.h";
#include "Plik.h";

using namespace std;

int main() {
	Drzewo d1;
    Plik p1(&d1);

    int c;
    do {
        cout << endl;
        cout << "---Menu---" << endl;
        cout << "1. Dodaj element" << endl;
        cout << "2. Usun element" << endl;
        cout << "3. Usun cale drzewo" << endl;
        cout << "4. Szukaj drogi do elementu" << endl;
        cout << "5. Wyswietl drzewo" << endl;
        cout << "6. Odczytaj z pliku" << endl;
        cout << "7. Wczytaj z pliku tekstowego" << endl;
        cout << "8. Zapisz do pliku" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybierz opcje: ";
        cin >> c;

        int klucz = NULL;
        string nazwaPliku;
        string stworzNoweDrzewo;
        switch (c) {
        case 1:
            cout << "Podaj wartosc do dodania: ";
            cin >> klucz;
            d1.DodajElementDoDrzewa(klucz);
            cout << endl;
            break;

        case 2:
            cout << "Podaj wartosc do usuniecia: ";
            cin >> klucz;
            d1.UsunElemntZDrzewa(klucz);
            cout << endl;
            break;

        case 3:
            d1.UsunDrzewo();
            cout << endl;
            break;

        case 4:
            cout << "Podaj wartosc do znalezienia drogi: " << endl;
            cin >> klucz;
            d1.SzukajDrogiDoPodanegoElemntu(klucz);
            cout << endl;
            break;

        case 5:
            d1.WyswietlDrzewo(d1.korzen);
            cout << endl;
            break;

        case 6:
            cout << "Podaj nazwe pliku: ";
            cin >> nazwaPliku;
            cout << "Odczytywanie z pliku " << nazwaPliku << "..." << endl;
            p1.Wczytaj(nazwaPliku);
            cout << endl;
            break;

        case 7:
            cout << "Podaj nazwe pliku: ";
            cin >> nazwaPliku;
            cout << "Czy chcesz stworzyc nowe drzewo? (t/n): ";
            cin >> stworzNoweDrzewo;
            if (stworzNoweDrzewo == "t") {
                d1.UsunDrzewo();
				p1.WczytajZTxt(nazwaPliku);
            }
            else if (stworzNoweDrzewo == "n") {
                p1.WczytajZTxt(nazwaPliku);
            }
            else {
                cout << "Nieprawidlowa opcja. Sprobuj ponownie.";
            }
            cout << endl;
            break;

        case 8:
            cout << "Podaj nazwe pliku: ";
            cin >> nazwaPliku;
            cout << "Zapisywanie do pliku " << nazwaPliku << "..." << endl;
            p1.Zapisz(nazwaPliku);
            cout << endl;
            break;

        case 0:
            d1.UsunDrzewo();
            cout << "Zakonczono program." << endl;
            break;

        default:
            cout << "Nieprawidlowa opcja. Sprobuj ponownie." << endl;
            break;
        }
    } while (c != 0);
}