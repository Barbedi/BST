#pragma once
#ifndef PLIK_H
#define PLIK_H
#include <iostream>
#include <fstream>
#include "BST.h"

class Plik {
private:
	Drzewo* tree;

public:
	Plik(Drzewo* tree) : tree(tree) {}
	void Zapisz(std::string nazwaPliku);
	void Wczytaj(std::string nazwaPliku);
};

#endif // !PLIK_H