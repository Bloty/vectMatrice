#pragma once
#include "Vecteur3.h"

class Matrice
{
private :
	int mat[3][3];
	

public :
	//Constructeur
	Matrice();

	//Méthode
	//void insererVal(int ligne, Vecteur3 vect);
	void insererVal(int ligne, int val1, int val2, int val3);
	void affiche();
};

