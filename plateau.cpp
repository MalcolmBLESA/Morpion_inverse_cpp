#include "plateau.h"
#include <iostream>
#include <iomanip>
using namespace std;
C_plateau::C_plateau()
{

}

void C_plateau::initialiser()
{
    grille[0][0] = '.';
    grille[0][1] = '.';
    grille[0][2] = '.';
    grille[1][0] = '.';
    grille[1][1] = '.';
    grille[1][2] = '.';
    grille[2][0] = '.';
    grille[2][1] = '.';
    grille[2][2] = '.';
}

void C_plateau::afficher()
{
    cout << setw(5) << left << ""<< setw(6) << left << 1<< setw(7) << left << 2<< 3<< endl;
    cout << "  +-----+-----+-----+" << endl
         << "1 |  "<<grille[0][0]<<"  |  "<<grille[0][1]<<"  |  "<<grille[0][2]<<"  |" << endl
         << "  +-----+-----+-----+" << endl
         << "2 |  "<<grille[1][0]<<"  |  "<<grille[1][1]<<"  |  "<<grille[1][2]<<"  |" << endl
         << "  +-----+-----+-----+" << endl
         << "3 |  "<<grille[2][0]<<"  |  "<<grille[2][1]<<"  |  "<<grille[2][2]<<"  |" << endl
         << "  +-----+-----+-----+" << endl;
}

bool C_plateau::caseLibre(int mx,int my)
{
    if (grille[mx][my] == '.')
    {
        return true;
    }else
    {
        return false;

    }
}

void C_plateau::poserSymbole(int mx , int my , char mJoueur)
{
    grille[mx][my] = mJoueur;
}

bool C_plateau::victoire()
{
    if (// horizontal
        (grille[0][0] != '.' && grille[0][0] == grille[0][1] && grille[0][1] == grille[0][2]) ||
        (grille[1][0] != '.' && grille[1][0] == grille[1][1] && grille[1][1] == grille[1][2]) ||
        (grille[2][0] != '.' && grille[2][0] == grille[2][1] && grille[2][1] == grille[2][2]) ||
        // vertical
        (grille[0][0] != '.' && grille[0][0] == grille[1][0] && grille[1][0] == grille[2][0]) ||
        (grille[0][1] != '.' && grille[0][1] == grille[1][1] && grille[1][1] == grille[2][1]) ||
        (grille[0][2] != '.' && grille[0][2] == grille[1][2] && grille[1][2] == grille[2][2]) ||
        // diagonales
        (grille[0][0] != '.' && grille[0][0] == grille[1][1] && grille[1][1] == grille[2][2]) ||
        (grille[0][2] != '.' && grille[0][2] == grille[1][1] && grille[1][1] == grille[2][0])
       )
        {
            return true ;
        }else
        {
            return false;
        }
}

bool C_plateau::estPlein()
{
    if (grille[0][0] != '.'&&
        grille[0][1] != '.'&&
        grille[0][2] != '.'&&
        grille[1][0] != '.'&&
        grille[1][1] != '.'&&
        grille[1][2] != '.'&&
        grille[2][0] != '.'&&
        grille[2][1] != '.'&&
        grille[2][2] != '.')
    {
        return true ;
    }else
    {
        return false ;
    }
}
