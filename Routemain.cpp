// Routemain.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "Moteurs.h"
#include "Voiture_Elect.h"

int main()
{
    Vehicule* V1 = new Vehicule("h", 30);
    Vehicule* V2 = new Vehicule("M", 40);

    V1->afficher();
    V2->afficher();

    Moteurs* M1 = new Moteurs(2022, 120);
    Voiture* R1 = new Voiture(" R", 50, 200,M1);
    R1->afficher();


    Moteurs* M2 = new Moteurs(2025, 250);
    Voiture_Elect* C1 = new Voiture_Elect("Tesla", 40, 0, M2, 100);
   
    C1->afficher();

    delete V1;
    delete V2;
    delete R1;
    delete C1;


}

