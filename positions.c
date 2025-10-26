#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include "sokoban.h"

void initPositions(char tab[9][9])
{
    int indices[81];
    int  nbCases;
    int i,j;
    int spawn;

    for (int tour=0;tour < 3; tour++)
    {
        casesVides(tab, indices, &nbCases);
        spawn = indices[rand() % nbCases];
        positionToCoord(spawn, &i, &j);
        if (tab[i][j] == ' ')
        {
            if (tour==0)
            {
                tab[i][j] = '.';
            }
            else if (tour==1)
            {
                if (i == 0)
                {
                    i++;
                }
                if (i == 8)
                {
                    i--;
                }
                if (j == 0)
                {
                    j++;
                } // sert à éviter que x soit dans le mur 
                if (j == 8)
                {
                    j--;
                }
                tab[i][j] = 'X';
            }
            else if (tour==2)
            {
                tab[i][j] = 'o';
            }
        }
    }
}

void positionToCoord(int pos, int *i, int *j)
{
    *i = (pos - 1) / 9;
    *j = (pos - 1) % 9;
}