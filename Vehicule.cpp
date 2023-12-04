#include "Vehicule.h"
Vehicule::Vehicule(int nbRoue, int poids)
{
	this->roues = nbRoue;
	this->poids = (float)poids;
	this->chargeEssieu = new float[this->roues / 2];
	for (int i = 0; i < nbRoue / 2; i++)
	{
		chargeEssieu[i] = this->poids / (this->roues / 2);
	}

}
Vehicule::~Vehicule()
{
	delete chargeEssieu;
}
// initialise le nombre de roues et le poids de ce vehicule 
void Vehicule::initialise(int inRoues, float inPoids)
{
	this->roues = nbRoue;
	this->poids = vPoids;
	this->chargeEssieu = new float[this->roues / 2];
	for (int i = 0; i < nbroues / 2; i++)
	{
		chargeEssieu[i] = this->poids / (this->roues / 2);
	}
}
// retourne le nombre de roues de ce vehicule 
int Vehicule::getRoues()
{
	return this->roues;
}
// retourne le poids de ce vehicule 
float Vehicule::getPoids()
{
	return this->poids;
}
// retourne la charge sur chaque roue de ce vehicule 
float Vehicule::chargeParRoue()
{
	return (this->poids / this->roues);
}

