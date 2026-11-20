#pragma once
#include <iostream>
using namespace std;

class Vehicule
{
private :
    string Marque;
    int vitesse;

public :
    Vehicule(string ,int);
    virtual void afficher() const;
    virtual~Vehicule();
    
};

