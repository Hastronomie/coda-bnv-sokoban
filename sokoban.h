#ifndef __SOKOBAN_H__
#define __SOKOBAN_H__

int ask(char * mov);
void viderBuffer();
void initTab(char tab[9][9]);
void afficher(char tab[9][9]);
void casesVides(char tab[9][9], int indices[], int *nbCases);
void positionToCoord(int pos, int *i, int *j);
void initPositions(char tab [9][9]);
int deplacer(char tab[9][9], char mov);
void trouverJoueur(char tab[9][9], int *i_o, int *j_o);
void trouverBox(char tab [9][9], int *i_x, int *j_x);
void trouverPoint(char tab [9][9], int *i_p, int *j_p);
#endif