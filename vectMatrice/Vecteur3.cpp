#include <iostream>
#include "Vecteur3.h"
#include "Matrice.h"



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

//Mutateur
void Vecteur3::setX(int _nX)
{
	this->nX = _nX;
}

void Vecteur3::setY(int _nY)
{
	this->nY = _nY;
}

void Vecteur3::setZ(int _nZ)
{
	this->nZ = nZ;
}

//Méthode
//affichage du vecteur 3D
void Vecteur3::affiche()
{
	std::cout << "<" << this->nX<< "," << this->nY << "," << this->nZ << ">" << std::endl;
}


