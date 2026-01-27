#include "cjeu.h"

CJeu::CJeu()
{

}


char CJeu::ChangerJoueur(){

    if(JoueurCourant == 'X'){
        cout << "C'est au tour de O de jouer" << endl;
        JoueurCourant = 'O';
        return 'O';
    }else {
        cout << "C'est au tour de X de jouer" << endl;
        JoueurCourant = 'X';
        return 'X';
    }
}

void CJeu::Saisie(int &mx, int &my)
{
    cout << "Joueur " << JoueurCourant << endl;
    cout << "Coordonnee X (1-3): ";
    cin >> mx;
    cout << "Coordonnee Y (1-3): ";
    cin >> my;

    mx--;
    my--;
}


void CJeu::Jouer()
{
    JoueurCourant = 'X';
    PlateauDeJeu.initialiser();
    PlateauDeJeu.afficher();

    cout << "La partie commence par le joueur : " << JoueurCourant << endl;

    while (!PlateauDeJeu.victoire() && !PlateauDeJeu.estPlein()) {

        int mx, my;
        Saisie(mx, my);

        if (!PlateauDeJeu.caseLibre(mx, my)) {
            cout << "Case deja occupee, recommence !" << endl;
            continue;
        }

        PlateauDeJeu.poserSymbole(mx, my, JoueurCourant);
        PlateauDeJeu.afficher();

        if (PlateauDeJeu.victoire()) {
            cout << "Le joueur " << JoueurCourant
                 << " a aligne 3 symboles et PERD la partie !" << endl;
            return;
        }

        ChangerJoueur();
    }

    if (PlateauDeJeu.estPlein()) {
        cout << "Plateau plein, match nul !" << endl;
    }
}
