#include <iostream>
#include <stdlib.h>
#include "Vecteur3.h"
#include "Matrice.h"
int main()
{
    Vecteur3 vect1(1, 2, 3);
    Vecteur3 vect2(1, 1, 1);
    Vecteur3 vect3(5, 2, 2);
    Matrice matrice1;

    vect1.affiche();

    matrice1.insererVal(0, vect1);
    matrice1.insererVal(1, vect2);
    matrice1.insererVal(2, vect3);

    matrice1.affiche();

};
