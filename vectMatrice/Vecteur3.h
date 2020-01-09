#pragma once
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

	//Méthode
	void affiche();
};

