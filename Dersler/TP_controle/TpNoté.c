#include <stdio.h>
#define Taille_Max 256

int main() {
    // Initialisation des variables utiles pour le programme (tableaux et entiers)
    int n;
    printf("Entrez le nombre (entier) de cases que comporte le tableau:\n");
    // Demande à l'utilisateur de donner la longueur du tableau
    scanf("%d", &n);

    int entiers_stockés[n];
    int entiers_pairs[Taille_Max];
    int entiers_impairs[Taille_Max];
    int k = 0; // Indice pour le tableau des entiers pairs
    int r = 0; // Indice pour le tableau des entiers impairs

    printf("Entrez des entiers:\n");
    // Demande à l'utilisateur de donner les valeurs du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &entiers_stockés[i]);
    }

    printf("Voici les entiers choisis:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", entiers_stockés[i]);
    }
    printf("\n");

    // Utilisation d'une boucle pour séparer les entiers pairs et impairs dans deux tableaux distincts
    for (int i = 0; i < n; i++) {
        if (entiers_stockés[i] % 2 == 0) {
            // Mettre la valeur en question dans le tableau des entiers pairs
            entiers_pairs[k] = entiers_stockés[i];
            k++; // Incrémenter l'indice des entiers pairs
        } else {
            // Mettre la valeur en question dans le tableau des entiers impairs
            entiers_impairs[r] = entiers_stockés[i];
            r++; // Incrémenter l'indice des entiers impairs
        }
    }

    printf("Voici les entiers pairs:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", entiers_pairs[i]);
    }
    printf("\n");

    printf("Voici les entiers impairs:\n");
    for (int i = 0; i < r; i++) {
        printf("%d ", entiers_impairs[i]);
    }
    printf("\n");

    return 0;
}
