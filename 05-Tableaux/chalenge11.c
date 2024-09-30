#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,n,som=0;
    int oc,val;
    // Demande locurrence qui va remplacer
    printf("Entrez ocurrence: ");
    scanf("%d", &oc);
    // Demande la  valeur qui replacer ocurrence
    printf("Entrez la valeur: ");
    scanf("%d", &val);
    // Demande le nombre d'éléments du tableau
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);
    int tableau[n];
    // Remplir le tableau
    printf("Entrez les elements du  tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // remplacer un element donner par autre donner
    printf("nouvelle version:\n");
    for (i = 0; i < n; i++) {
        if(tableau[i]==oc)tableau[i]=val;
    }
     for (i = 0; i < n; i++) {
        printf("\n%d\t",tableau[i]);
    }
    return 0;
}
