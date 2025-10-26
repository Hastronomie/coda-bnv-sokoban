#include <stdlib.h>
#include <stdio.h>

void initTab(char tab[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            tab[i][j] = ' ';
        }
    }
}