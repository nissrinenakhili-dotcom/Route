#pragma once
#include "Vehicule.h"
#include "Moteurs.h"

class Voiture : public Vehicule
{
private:
    int Quantitegaz;
    Moteurs* moteurs;
public:
    Voiture(string, int, int,Moteurs*);
    virtual void afficher()const override;
    ~Voiture() override;
};