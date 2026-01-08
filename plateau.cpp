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

bool C_plateau::caseLibre(char mx,char my)
{
    if (grille[mx][my] == '.')
    {
        return true;
    }
}

void C_plateau::poserSymbole(char mx , char my , char mJoueur)
{
    grille[mx][my] = mJoueur;
}

bool C_plateau::victoire()
{
    if (grille[0][0] == grille[0][1] && grille[0][1] == grille[0][2] ||
        grille[1][0] == grille[1][1] && grille[1][1] == grille[1][2] ||
        grille[2][0] == grille[2][1] && grille[2][1] == grille[2][2] ||
        //horizontal
        grille[0][0] == grille[1][0] && grille[1][0] == grille[2][0] ||
        grille[0][1] == grille[1][1] && grille[1][1] == grille[2][1] ||
        grille[0][2] == grille[1][2] && grille[1][2] == grille[2][2] ||
        //verticale
        grille[0][0] == grille[1][1] && grille[1][1] == grille[2][2] ||
        grille[0][2] == grille[1][1] && grille[1][1] == grille[2][0] ||
        //diagonale
        )
        {
            return true 
        }
}
