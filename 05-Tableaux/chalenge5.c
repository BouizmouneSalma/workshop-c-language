#include <stdio.h>

int main() {
    int n,min,i;

    // Demande à l'utilisateur de saisir la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int arr[n];

    // Saisie des éléments du tableau
    printf("Entrez %d entiers :\n", n);
    for (i = 0; i <n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    // min d'un tableau
    min=arr[0];
    for (i = 0; i <n; i++) {
        if(min > arr[i]) min=arr[i];
    }

    printf("[%d\n]",min);

    return 0;
}
