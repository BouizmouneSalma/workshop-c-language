#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,n,som=0;
    int val;
    // valeur rechercher
    printf("Entrez ocurrence: ");
    scanf("%d", &val);
    // Demande le nombre d'éléments du tableau
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);
    int tableau[n];
    // Remplir le tableau
    printf("Entrez les elements du  tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d\n", &tableau[i]);
    }

    // Rechercher dans le tableau
    for (i = 0; i < n; i++) {
        if(tableau[i]==val){
            break;
        }
    }
    if(i<n)printf("element presenter");
    else printf("element non presenter");
    return 0;
}
