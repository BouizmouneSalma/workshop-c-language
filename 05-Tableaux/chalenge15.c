#include<stdio.h>
#include<stdlib.h>

int main() {
    int n1, n2, i;

    // Demande le nombre d'éléments du premier tableau
    printf("Entrez le nombre d'elements du premier tableau: ");
    scanf("%d", &n1);
    int tableau1[n1];
    // Remplir le premier tableau
    printf("Entrez les elements du premier tableau:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &tableau1[i]);
    }

    // Demande le nombre d'éléments du deuxième tableau
    printf("Entrez le nombre d'elements du deuxieme tableau: ");
    scanf("%d", &n2);

    // Alloue dynamiquement la mémoire pour le deuxième tableau
    int tableau2[n2];

    // Remplir le deuxième tableau
    printf("Entrez les elements du deuxieme tableau:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &tableau2[i]);
    }

    int tableauFusionne[n1+n2];
    // Copier les éléments du premier tableau dans le tableau fusionné
    for (i = 0; i < n1; i++) {
        tableauFusionne[i] = tableau1[i];
    }

    // Copier les éléments du deuxième tableau dans le tableau fusionné
    for (i = 0; i < n2; i++) {
        tableauFusionne[n1 + i] = tableau2[i];
    }

    // Affiche le tableau fusionné
    printf("Tableau fusionne: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", tableauFusionne[i]);
    }
    printf("\n");


    return 0;
}
