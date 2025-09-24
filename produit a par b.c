#include <stdio.h>

int main() {
    int a, b, produit = 0;

    // Saisie des valeurs
    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);

    // Vérification
    if (a > 0 && b > 0) {
        // Addition répétée
        for (int i = 0; i < b; i++) {
            produit += a;
        }
        printf("Le produit de %d et %d est : %d\n", a, b, produit);
    } else {
        printf("Erreur : a et b doivent être strictement positifs.\n");
    }

    return 0;
}
