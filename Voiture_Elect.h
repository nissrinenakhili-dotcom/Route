#pragma once
#include "Voiture.h"
class Voiture_Elect : public Voiture
{
private:
	int NivBatterie;
public:
	Voiture_Elect(string, int, int, Moteurs*,int);
	void afficher()const override;
};

