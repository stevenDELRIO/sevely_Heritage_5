// TP-5 Héritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vehicule.h"
#include "car.h"
using namespace std;

int main()
{
    int nbcar;
    int nbpassager;
    cout << "Entree le nombre d'objetc car a cree ?  : \n";
    cin >> nbcar;
    cout << "Entree le nombre de passager : \n";
    cin >> nbpassager;
    
    
    // Créez un object véhicule
    Vehicule monVehicule;
    Vehicule DS;

    // pointeur sur un objetc de la classe Vehicule : 
    //Vehicule* ptrDS; 
    Vehicule BUS83; 

    // Initialise la valeur du pointeur sur l'adresse de l'object DS
    //ptrDS = &DS; 

    //Initialisation de la valeur du pointeur. 
    //ptrDS->poids = 750; // poid du vehicule
    //ptrDS->roues = 4; // nombre de roue du vehicule
    BUS83.poids = 7550;
    BUS83.roues = 4;
   




    // Obtien les informations sur le véhicule
    int nombreDeRoues = BUS83.getRoues();
    float poidsDuVehicule = BUS83.getPoids();
    float chargeParRoue = BUS83.chargeParRoue();

    // Affichez les informations
    std::cout << "Mon vehicule a " << nombreDeRoues << " roues." << std::endl;
    std::cout << "Le poids de mon vehicule est de " << poidsDuVehicule << " kg." << std::endl;
    std::cout << "La charge par roue est de " << chargeParRoue << " kg/roue." << std::endl;

    return 0;
}







