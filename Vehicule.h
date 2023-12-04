#pragma once
class Vehicule 
{
	int roues; // nombre de roues 
	float poids; // en kg
	float* chargeEssieu;
public:
	Vehicule(int nbRoue = 3, int poids = 3250);
	~Vehicule();
	void initialise(int nbRoues, float vpPoids);
	int getRoues(void);
	float getPoids(void);
	float chargeParRoue(void);
	 
};
