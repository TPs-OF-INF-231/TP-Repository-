#include <stdio.h>

int estTrieCroissant(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            return 0; // Pas trié
        }
    }
    return 1; // Trié
}

int main() {
    int tableau[] = {2, 4, 6, 8, 10};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    if (estTrieCroissant(tableau, taille)) {
        printf("Le tableau est trié en ordre croissant.\n");
    } else {
        printf("Le tableau n'est pas trié.\n");
    }

    return 0;
}
