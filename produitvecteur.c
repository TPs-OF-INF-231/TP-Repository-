#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Vecteur3D;

Vecteur3D produitVectoriel(Vecteur3D a, Vecteur3D b) {
    Vecteur3D c;
    c.x = a.y * b.z - a.z * b.y;
    c.y = a.z * b.x - a.x * b.z;
    c.z = a.x * b.y - a.y * b.x;
    return c;
}

int main() {
    Vecteur3D A = {1, 2, 3};
    Vecteur3D B = {4, 5, 6};

    Vecteur3D C = produitVectoriel(A, B);

    printf("Produit vectoriel : (%.2f, %.2f, %.2f)\n", C.x, C.y, C.z);

    return 0;
}
