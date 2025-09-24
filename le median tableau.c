#include <stdio.h>

// Fonction pour trier le tableau (tri par sélection)
void trier(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tab[i] > tab[j]) {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

// Fonction pour calculer la médiane
float mediane(int tab[], int taille) {
    trier(tab, taille); // On trie d'abord le tableau

    if (taille % 2 == 0) {
        // Si taille paire : moyenne des deux du milieu
        return (tab[taille/2 - 1] + tab[taille/2]) / 2.0;
    } else {
        // Si taille impaire : élément du milieu
        return tab[taille/2];
    }
}

int main() {
    int tableau[] = {7, 3, 9, 1, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    float m = mediane(tableau, taille);
    printf("La médiane est : %.2f\n", m);

    return 0;
}
