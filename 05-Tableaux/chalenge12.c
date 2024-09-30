#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,n,som=0;

    // Demande le nombre d'éléments du tableau
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);
    int tableau[n];
    // Remplir le tableau
    printf("Entrez les elements du  tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // aficher les nombres impaire
    printf("Nombres impaire:\n");
    for (i = 0; i < n; i++) {
        if(tableau[i]%2==0)printf(" %d \t",tableau[i]);
    }
    
    return 0;
}
