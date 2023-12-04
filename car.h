#pragma once
#include "Vehicule.h"
class car:public Vehicule

{
public:
	int passager; // declaration des passager 
	int* poids_passagers = 0; // decalration du poids des passagers 
	float poids_moyen = 0; // declaration du poid moyen des passagers
	
	

private:
	car(int passager = 10);
	~car();
	int nombre_depassager(); 
	float getPoidMoyen();
	void setnbPassager(int nbr_passager); // Permet de modifier le nombre de passager 




};

