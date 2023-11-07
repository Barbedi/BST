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
			char* klucze = tree->ZwrocKlucze();
			try {
				plik.write(klucze, sizeof(klucze));
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