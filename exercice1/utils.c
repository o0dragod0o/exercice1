#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "utils.h"

void supprimer_espace(char *chaine) {
    int i = 0, j = 0;

    while (chaine[i] == ' ') {
        i++;
    }

    while (chaine[i] != '\0') {
        chaine[j] = chaine[i];
        i++;
        j++;
    }
    chaine[j] = '\0';

    j--;
    while (j >= 0 && chaine[j] == ' ') {
        chaine[j] = '\0';
        j--;
    }
}


void prenNom(char *NP) {
    char prenom[100], nom[100];
    int i = 0, j = 0;

    while (NP[i] != ' ' && NP[i] != '\0') {
        prenom[j++] = NP[i++];
    }
    prenom[j] = '\0';

    if (NP[i] == ' ') {
        i++;
    }

    j = 0;
    while (NP[i] != '\0') {
        nom[j++] = NP[i++];
    }
    nom[j] = '\0';

    i=0; j=0;
    while (NP[i] != '\0')
    {
        if  (strlen(nom) > i)
            NP[i] = nom[i];
        else if (strlen(nom) == i)
            NP[i] = ' ';
        else
            NP[i] = prenom[j++];
        i++;

    }
    
}

void formaterNP(char *NP)
{
    int i = 0;
    while (NP[i] != ' ')
    {
        i++;
    }
    NP[i + 2] = '\0';

}


