#include <iostream>
#include "Vecteur3.h"



Vecteur3::Vecteur3(int _nX, int _nY, int _nZ)
{
	this->nX = _nX;
	this->nY = _nY;
	this->nZ = _nZ;
}

//Assesseurs
int Vecteur3::getX()
{
	return nX;
}

int Vecteur3::getY()
{
	return nY;
}

int Vecteur3::getZ()
{
	return nZ;
}

//Méthode
void Vecteur3::affiche()
{
	std::cout << "<" << this->nX<< "," << this->nY << "," << this->nZ << ">" << std::endl;
}
