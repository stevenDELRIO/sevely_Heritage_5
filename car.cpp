#include "car.h"
#include "Vehicule.h"
#include <iostream>
using namespace std;

car::car(int passager): Vehicule()
{
    setnbPassager(passager);
    this->passager = passager;
}
car::~car()
{
    delete poids_passagers; 
}

int car::nombre_depassager()
{
    return this->passager;
}

float car::getPoidMoyen()
{
    int total = 0;
    // Boucle qui ajoute chaque valeur du tableau et le ajoute a une variable 
    for (int i = 0; i < this->passager; i++)
        total += poids_passagers[i];
    this->poids_moyen = ((float)total / this->passager); // fait la moyenne et la stock dans l'attribut privé de la classe 

    return this->poids_moyen; // retourne le float
}

void car::setnbPassager(int nbr_passager)
{
    this->passager = nbr_passager;
    poids_passagers = new int[nbr_passager];
    for (int i = 0; i < nbr_passager; i += 1)
        poids_passagers[i] = rand() % 106 + 15; 
}


