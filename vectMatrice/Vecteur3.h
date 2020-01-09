#pragma once
#include "Matrice.h"


class Vecteur3
{
private :
	int nX = 0;
	int nY = 0;
	int nZ = 0;

public :
	//Constructeur
	Vecteur3(int _nX = 0, int _nY = 0, int _nZ = 0);

	//Assesseurs
	int getX();
	int getY();
	int getZ();

	//Mutateur
	void setX(int _nX);
	void setY(int _nY);
	void setZ(int _nZ);

	//Méthode
	void affiche();

	//friend Matrice Vecteur3::produit(Matrice matrise);
};

