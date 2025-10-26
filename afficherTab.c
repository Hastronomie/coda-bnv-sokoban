#include <stdlib.h>
#include <stdio.h>

void afficher(char tab[9][9]) 
{
    printf("\n");
    printf("# # # # # # # # # # #\n");
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[0][0], tab[0][1], tab[0][2], tab[0][3], tab[0][4], tab[0][5], tab[0][6], tab[0][7], tab[0][8]);
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[1][0], tab[1][1], tab[1][2], tab[1][3], tab[1][4], tab[1][5], tab[1][6], tab[1][7], tab[1][8]);
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[2][0], tab[2][1], tab[2][2], tab[2][3], tab[2][4], tab[2][5], tab[2][6], tab[2][7], tab[2][8]);
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[3][0], tab[3][1], tab[3][2], tab[3][3], tab[3][4], tab[3][5], tab[3][6], tab[3][7], tab[3][8]);
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[4][0], tab[4][1], tab[4][2], tab[4][3], tab[4][4], tab[4][5], tab[4][6], tab[4][7], tab[4][8]);
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[5][0], tab[5][1], tab[5][2], tab[5][3], tab[5][4], tab[5][5], tab[5][6], tab[5][7], tab[5][8]);
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[6][0], tab[6][1], tab[6][2], tab[6][3], tab[6][4], tab[6][5], tab[6][6], tab[6][7], tab[6][8]);
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[7][0], tab[7][1], tab[7][2], tab[7][3], tab[7][4], tab[7][5], tab[7][6], tab[7][7], tab[7][8]);
    printf("# %c %c %c %c %c %c %c %c %c #\n", tab[8][0], tab[8][1], tab[8][2], tab[8][3], tab[8][4], tab[8][5], tab[8][6], tab[8][7], tab[8][8]);
    printf("# # # # # # # # # # #\n");
    printf("\n");
}

void casesVides(char tab[9][9], int indices[], int *nbCases)
{
    int compteur = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (tab[i][j] == ' ')
            {
                indices[compteur]= i*9+j+1;
                compteur++;
            }
        }
    }
    *nbCases = compteur;
}