#include <stdio.h>

int main() {
    int n,i,fract;

    // Demande à l'utilisateur de saisir la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
   // Demande à l'utilisateur de saisir un fract
    printf("Entrez un fract : ");
    scanf("%d", &fract);

    int arr[n];

    // Saisie des éléments du tableau
    printf("Entrez %d entiers :\n", n);
    for (i = 0; i <n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    //multiplication
    for (i = 0; i <n; i++) {
        arr[i]=arr[i]*fract;
    }
    //affichage du tableau aprés la multiplication
    for (i = 0; i < n; i++) {
        printf("\n%d\t",arr[i]);
    }
    return 0;
}
