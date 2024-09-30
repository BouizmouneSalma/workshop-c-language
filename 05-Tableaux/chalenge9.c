#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,n;
    // Demande le nombre d'éléments du tableau
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);
    int tableau[n];
    // Remplir le tableau
    printf("Entrez les elements du  tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d\n", &tableau[i]);
    }
    printf("[\t");
    // afficher inverse
    for (i = n-1; i >= 0; i--) {
       printf("%d\t", tableau[i]);
    }
    printf("]");
    return 0;
}
