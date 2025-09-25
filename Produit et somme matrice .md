
#include <stdio.h>

#define MAX 10  // taille maximale des matrices

// Fonction pour lire une matrice
void lireMatrice(int mat[MAX][MAX], int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Fonction pour afficher une matrice
void afficherMatrice(int mat[MAX][MAX], int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Fonction pour additionner deux matrices
void sommeMatrices(int A[MAX][MAX], int B[MAX][MAX], int S[MAX][MAX], int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Fonction pour multiplier deux matrices
void produitMatrices(int A[MAX][MAX], int B[MAX][MAX], int P[MAX][MAX], int l1, int c1, int c2) {
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            P[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                P[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], S[MAX][MAX], P[MAX][MAX];
    int l1, c1, l2, c2;

    // Lecture des dimensions
    printf("Entrez le nombre de lignes et colonnes de la 1ère matrice : ");
    scanf("%d %d", &l1, &c1);

    printf("Entrez le nombre de lignes et colonnes de la 2ème matrice : ");
    scanf("%d %d", &l2, &c2);

    // Lecture des matrices
    printf("\n--- Saisie de la 1ère matrice ---\n");
    lireMatrice(A, l1, c1);

    printf("\n--- Saisie de la 2ème matrice ---\n");
    lireMatrice(B, l2, c2);

    // Affichage des matrices saisies
    printf("\nMatrice A :\n");
    afficherMatrice(A, l1, c1);

    printf("\nMatrice B :\n");
    afficherMatrice(B, l2, c2);

    // Somme
    if (l1 == l2 && c1 == c2) {
        sommeMatrices(A, B, S, l1, c1);
        printf("\nSomme A + B :\n");
        afficherMatrice(S, l1, c1);
    } else {
        printf("\nLa somme n'est pas possible (dimensions différentes).\n");
    }

    // Produit
    if (c1 == l2) {
        produitMatrices(A, B, P, l1, c1, c2);
        printf("\nProduit A x B :\n");
        afficherMatrice(P, l1, c2);
    } else {
        printf("\nLe produit n'est pas possible (colonnes A ≠ lignes B).\n");
    }

    return 0;
}
