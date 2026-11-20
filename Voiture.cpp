#include "Voiture.h"
#include "Moteurs.h"

Voiture::Voiture(string M, int v, int Q, Moteurs*e):Vehicule(M,v)
{
	this->Quantitegaz = Q;
	this->moteurs = e;
}

void Voiture::afficher() const
{
	cout << "l'affichage de la classe Voiture" << endl;
    this->Vehicule::afficher();
	cout << "La Quantite de Gaz est :" << Quantitegaz << endl;
	cout << "Le moteurs est :" << endl;
	moteurs->afficher();
}

Voiture::~Voiture()
{
	delete moteurs;
}
