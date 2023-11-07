#pragma once
#ifndef PLIK_H
#define PLIK_H
#include <iostream>
#include <fstream>
#include "BST.h"

class Plik {
private:
	drzewo* tree;

public:
	Plik(drzewo* tree) : tree(tree) {}
	void Zapisz(std::string nazwaPliku);
};

#endif // !PLIK_H