#include "Moteurs.h"
#include <iostream>

Moteurs::Moteurs(int x, int y) {
	annee = x;
	puissance = y;
}

void Moteurs::afficher() const {
	std::cout << "l'annee est:" << annee << std::endl;
	std::cout << "la puissance est:" << puissance << std::endl;
}

Moteurs::~Moteurs()
{
}
