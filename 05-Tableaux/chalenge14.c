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

    // calculer le moyenne
    printf("calculer le moyenne:\n");
    for (i = 0; i < n; i++) {
        som+=tableau[i];
    }
    //fair le casting pour donner un nombre exact
     double moy= (double)som/n;
    
    printf("\nle moyenne est :%lf",moy);


    return 0;
}
