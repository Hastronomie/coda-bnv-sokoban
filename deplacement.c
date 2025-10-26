#include <stdlib.h>
#include <stdio.h>
#include "sokoban.h"

int deplacer(char tab[9][9], char mov)
{
    int reussit;
    int i_o, j_o, i_x, j_x, i_p, j_p;
    trouverJoueur(tab, &i_o, &j_o);
    trouverBox(tab, &i_x, &j_x);
    trouverPoint(tab, &i_p, &j_p);

    int new_i_o = i_o;
    int new_j_o = j_o;
    int new_i_x = i_x;
    int new_j_x = j_x;

    if (mov == 'z') 
    {
        new_i_o--;
        if (new_i_o == new_i_x && new_j_o == new_j_x) 
        {
            new_i_x--;
        }
    } 
    else if (mov == 's') 
    {
        new_i_o++;
        if (new_i_o == new_i_x && new_j_o == new_j_x) 
        {
            new_i_x++;
        }
    }
    else if (mov == 'q') 
    {
        new_j_o--;
        if (new_j_o == new_j_x && new_i_o == new_i_x) 
        {
            new_j_x--;
        }
    }
    else if (mov == 'd') 
    {
        new_j_o++;
        if (new_j_o == new_j_x && new_i_o == new_i_x)  
        {
            new_j_x++;
        }
    }
    else return 0; // touche invalide

    // Vérifier si on reste dans la grille
    if (new_i_o < 0 || new_i_o >= 9 || new_j_o < 0 || new_j_o >= 9 || new_i_x < 0 || new_i_x >= 9 || new_j_x < 0 || new_j_x >= 9)
    {
        return 0;
    }
    // Vérifier collisioon caisse
    if (tab[new_i_x][new_j_x] == ' ' || tab[new_i_x][new_j_x] == '.' )
    {
        tab[new_i_x][new_j_x] = 'X';
    }
    // Vérifier collisions mur ou caisse bonhomme
    if (tab[new_i_o][new_j_o] == ' ' || tab[new_i_o][new_j_o] == 'X'  )
    {
        tab[i_o][j_o] = ' ';
        tab[new_i_o][new_j_o] = 'o';
        // reussit=1;
        if (new_i_x == i_p && new_j_x == j_p)
        {
            return(42);
        }
        //défaite
        if (new_i_x == 0 && i_p !=0 || new_i_x == 8 && i_p !=8 || new_j_x == 0 && j_p != 0 || new_j_x == 8 && j_p != 8)
        {
            return 2;
        }
        else
        {
            return 1; // déplacement réussi
        }
    }

    return 0; // déplacement impossible
}

