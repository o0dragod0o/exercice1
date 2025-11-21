#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "utils.h"

int main() {
    char phrase[256];

    printf("entrez un prenom nom : ");
    fgets(phrase, 256, stdin);

    if (phrase[strlen(phrase) - 1] == '\n') {
        phrase[strlen(phrase) - 1] = '\0';
    }

    supprimer_espace(phrase);
    prenNom(phrase);
    formaterNP(phrase);

    printf("Phrase : '%s'\n", phrase);

    return 0;
}
