#pragma once
class Moteurs
{
	int annee;
	int puissance;

public:
	Moteurs(int, int);
	void afficher() const;
	~Moteurs();
};

