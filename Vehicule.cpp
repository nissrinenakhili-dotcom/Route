#include "Vehicule.h"

Vehicule::Vehicule(string M, int v):Marque(M),vitesse(v)
{
}

void Vehicule::afficher() const
{
	cout << "l'affichage de la classe Vehicule" << endl;
	cout << "La Marque est :" << Marque << endl;
	cout << "La Vitesse est :" << vitesse << endl;
}

Vehicule::~Vehicule()
{
}
