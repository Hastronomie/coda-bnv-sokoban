#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include "sokoban.h"

int main()
{
    char tab [9][9];
    char mov;
    int check=0;
    int i,j;
    int i_o, j_o;
    int nbCases;
    int indices[81];

    srand(time(NULL));
    FILE *fp = fopen("end.txt", "w");
    if (fp == NULL)
    {
        printf("Le fichier end.txt n'a pas pu être ouvert\n");
        return EXIT_FAILURE;
    }

    system("clear");
    initTab(tab);
    initPositions(tab);
    printf("Bonjour, voici votre terrain de jeu.\nLes shaders se chargent...\n");
    sleep(1);
    afficher(tab);

    while (check<3)
    {
        ask(&mov);
        check = deplacer(tab, mov);

        if (check==0)
        {
            system("clear");
            printf("Mince, tu as fais un faux mouvement: tu es tombé. Recommence !");
        }
        else if (check == 2)
        {
            system("clear");        
            afficher(tab);
            printf("La caisse s'est brisée en mille morceaux et vous avec ! ⊙﹏⊙∥\n");

            fprintf(fp, "=== Perdu ! ===\n");
            fprintf(fp,"\n# # # # # # # # # #\n");
            for (int i = 0; i < 9; i++) 
            {
                fprintf(fp,"#");
                for (int j = 0; j < 9; j++)
                {
                    fprintf(fp, "%c ", tab[i][j]);
                }
                fprintf(fp, "#\n");
            }
            fprintf(fp,"# # # # # # # # # #\n");
            fclose(fp);

            exit(0);
            
        }

        system("clear");        
        afficher(tab);
        viderBuffer();
    }
    printf("Bravo, vous avez marqué 42 points ! (⌐■_■)\n");

    fprintf(fp, "=== Gagné ! ===\n");
    fprintf(fp,"\n# # # # # # # # # #\n");
    for (int i = 0; i < 9; i++) 
    {
        fprintf(fp,"#");
        for (int j = 0; j < 9; j++)
        {
            fprintf(fp, "%c ", tab[i][j]);
        }
        fprintf(fp, "#\n");
    }
    fprintf(fp,"# # # # # # # # # #\n");
    fclose(fp);

    exit(0);
}