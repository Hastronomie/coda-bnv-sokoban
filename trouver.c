#include <stdlib.h>
#include <stdio.h>
#include "sokoban.h"

void trouverJoueur(char tab[9][9], int *i_o, int *j_o)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (tab[i][j] == 'o')
            {
                *i_o = i;
                *j_o = j;
                return;
            }
        }
    }
}

void trouverBox(char tab [9][9], int *i_x, int *j_x)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (tab[i][j] == 'X')
            {
                *i_x = i;
                *j_x = j;
                return;
            }
        }
    }
}

void trouverPoint(char tab [9][9], int *i_p, int *j_p)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (tab[i][j] == '.')
            {
                *i_p = i;
                *j_p = j;
                return;
            }
        }
    }
}