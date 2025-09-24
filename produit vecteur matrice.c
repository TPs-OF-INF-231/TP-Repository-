#include <stdio.h>

int main() {
    int n, m;

    // Saisie des dimensions
    printf("Entrez la taille du vecteur (n) : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice (m) : ");
    scanf("%d", &m);

    int vecteur[n];
    int matrice[n][m];
    int resultat[m];

    // Initialiser le résultat à 0
    for (int j = 0; j < m; j++) {
        resultat[j] = 0;
    }

    // Saisie du vecteur
    printf("Entrez les éléments du vecteur :\n");
    for (int i = 0; i < n; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &vecteur[i]);
    }

    // Saisie de la matrice
    printf("Entrez les éléments de la matrice (%d lignes × %d colonnes) :\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Calcul du produit vecteur × matrice
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }

    // Affichage du résultat
    printf("Résultat du produit vecteur × matrice :\n");
    for (int j = 0; j < m; j++) {
        printf("%d ", resultat[j]);
    }
    printf("\n");

    return 0;
}
