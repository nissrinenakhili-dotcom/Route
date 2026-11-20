#include "Voiture_Elect.h"

Voiture_Elect::Voiture_Elect(string M, int v, int Q,Moteurs*e ,int NB):Voiture(M,v,Q,e)
{
	this->NivBatterie = NB;
}

void Voiture_Elect::afficher() const
{
	cout << "l'affichage de la classe Voiture_Electrique" << endl;
	this->Voiture::afficher();
	cout << "La niveau de Batterie est :" << NivBatterie << endl;
}
