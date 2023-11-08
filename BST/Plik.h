#pragma once
#ifndef PLIK_H
#define PLIK_H
#include <iostream>
#include <fstream>
#include <string>
#include "BST.h"

class Plik {
private:
	Drzewo* tree;

public:
	Plik() : tree(NULL) {}
	Plik(Drzewo* tree) : tree(tree) {}
	void Zapisz(std::string nazwaPliku);
	void Wczytaj(std::string nazwaPliku);
	void WczytajZTxt(std::string nazwaPliku);
};

#endif // !PLIK_H