#ifndef PLATEAU_H
#define PLATEAU_H


class C_plateau
{
    char grille[3][3];
public:
    C_plateau();
    void initialiser();
    void afficher();
    bool caseLibre(char x,char y);
    void poserSymbole(char x,char y , char joueur);
    bool victoire();
    bool estPlein();
};


#endif // PLATEAU_H
