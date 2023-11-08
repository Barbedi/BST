#include "Plik.h";

using namespace std;

void Plik::Zapisz(string nazwaPliku)
{
	ofstream plik(nazwaPliku + ".bin", ios::binary);
	if (plik)
	{
		ofstream plik(nazwaPliku + ".bin", ios::binary);
		if (plik)
		{
			int rozmiar = tree->ZwrocIloscElementow();
			char* klucze = new char[rozmiar];

			for (size_t i = 0; i < rozmiar; i++)
			{
				klucze[i] = tree->korzen->klucz;

				if (tree->korzen->lewo) {
					tree->korzen = tree->korzen->lewo;
				}
				else if (tree->korzen->prawo) {
					tree->korzen = tree->korzen->prawo;
				}
			}

			try {
				plik.write(klucze, rozmiar);
				cout << "Zapis do pliku zakonczony" << endl;
			}
			catch (exception e) {
				cerr << "Blad zapisu do pliku: " << e.what() << endl;
			}
			plik.close();
			delete[] klucze;
		}
		else
		{
			cerr << "Nie mozna otworzyc pliku!" << endl;
		}
	}
}

void Plik::Wczytaj(string nazwaPliku) 
{
	ifstream plik(nazwaPliku + ".bin", ios::binary);
	if (plik)
	{
		plik.seekg(0, ios::end);
		int rozmiar = plik.tellg();
		plik.seekg(0, ios::beg);
		char* klucze = new char[rozmiar];
		plik.read(klucze, rozmiar);

		for (size_t i = 0; i < rozmiar; i++)
		{
			cout << (int)klucze[i] << endl;
		}

		delete[] klucze;
		plik.close();
	}
	else 
	{
		cerr << "Nie mozna otworzyc pliku!" << endl;
	}
}

void Plik::WczytajZTxt(string nazwaPliku)
{
	ifstream plik(nazwaPliku + ".txt");
	if (plik)
	{
		string linia;
		while (getline(plik, linia))
		{
			for (size_t i = 0; i < linia.length(); i++)
			{
				if (linia[i] != ' ')
				{
					int temp = linia[i] - '0';
					cout << "Linia: " << temp << endl;
					tree->DodajElementDoDrzewa(temp);
				}
			}
		}
		plik.close();
	}
	else
	{
		cerr << "Nie mozna otworzyc pliku!" << endl;
	}
}