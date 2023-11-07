#include "Plik.h";

using namespace std;

void Plik::Zapisz(string nazwaPliku)
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