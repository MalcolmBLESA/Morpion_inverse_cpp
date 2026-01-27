#ifndef CJEU_H
#define CJEU_H
#include <iostream>
#include <utility>
#include "plateau.h"

using namespace std;

class CJeu
{
private:
    char JoueurCourant;
    C_plateau PlateauDeJeu;
public:
    CJeu();
    char ChangerJoueur();
    void Jouer();
    void Saisie(int &mx, int &my);
};

#endif // CJEU_H
