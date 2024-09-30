#include <stdio.h>

int main() {
    int n;

    // Demande à l'utilisateur de saisir la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int arr[n];

    // Saisie des éléments du tableau
    printf("Entrez %d entiers :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tri du tableau 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n ; j++) {
            if (arr[j] > arr[j + 1]) {
                // Échange des éléments
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    printf("Tableau trié en ordre croissant :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
