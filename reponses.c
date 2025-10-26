#include <stdlib.h>
#include <stdio.h>

int ask(char * mov)
{
    printf("\nVers où voulez-vous aller ?\n");
    scanf("%c", mov);
}

void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}