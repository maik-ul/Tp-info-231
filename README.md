#include <stdio.h>

#define MAX 100   // Taille maximale du tableau

// Fonction de recherche séquentielle
int rechercheSequentielle(int tab[], int n, int valeur) {
    for (int i = 0; i < n; i++) {
        if (tab[i] == valeur) {
            return i; // Retourne l'indice si trouvé
        }
    }
    return -1; // Retourne -1 si non trouvé
}

int main() {
    int tab[MAX], n, valeur, pos;

    // Lecture de la taille du tableau
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    // Saisie des elements
    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    // Valeur a rechercher
    printf("\nEntrez la valeur a rechercher : ");
    scanf("%d", &valeur);

    // Recherche
    pos = rechercheSequentielle(tab, n, valeur);

    // Affichage du résultat
    if (pos != -1) {
        printf("\nLa valeur %d est trouvee a la position %d (indice %d).\n", valeur, pos + 1, pos);
    } else {
        printf("\nLa valeur %d n'existe pas dans le tableau.\n", valeur);
    }

    return 0;
}
