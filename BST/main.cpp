#include <iostream>
#include "BST.h";

using namespace std;

int main() {
	drzewo d1;

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
            d1.UsunDrzewo();
            break;

        case 4:
            cout << "Podaj wartosc do znalezienia drogi: " << endl;
            cin >> klucz;
            d1.SzukajDrogiDoPodanegoElemntu(klucz);
            break;

        case 5:
            d1.WyswietlDrzewo();
            break;

        case 6:
            cout << "Odczyt z pliku" << endl;
            break;

        case 7:
            cout << "Zapis do pliku" << endl;
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