#include <iostream>
#include "Matrice.h"
#include "Vecteur3.h"

/*
Matrice::Matrice(int tab[][3])
{
    int i, j;

    for (i = 0;i < 3;i++)
        for (j = 0;j < 3;j++)
            mat[i][j] = tab[i][j];
}
*/

Matrice::Matrice()
{
    int i, j;

    for (i = 0;i < 3;i++)
        for (j = 0;j < 3;j++)
            mat[i][j] = 0;
}
void Matrice::insererVal(int ligne, Vecteur3 vect)
{
    this->mat[ligne][0] = vect.getX();
    this->mat[ligne][1] = vect.getY();
    this->mat[ligne][2] = vect.getZ();
}
/*
void Matrice::insererVal(int ligne, int val1, int val2, int val3)
{
    this->mat[ligne][0] = val1;
    this->mat[ligne][1] = val2;
    this->mat[ligne][2] = val3;
}
*/
void Matrice::affiche()
{
    int i, j;

    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            std::cout << mat[i][j] << " ";
        }
            
        std::cout << std::endl;
    }

}
