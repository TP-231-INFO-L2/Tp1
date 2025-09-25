#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, li, co;
    int A[10][10], B[10][10], C[10][10] = {0};
    
    printf("Entrer le nombre de matrices que vous voulez multiplier: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Le nombre de matrices doit être positif.\n");
        return 1;
    }
    
    // Saisie des dimensions de la première matrice
    do {
        printf("Entrer le nombre de lignes de la première matrice: ");
        scanf("%d", &li);
        if (li > 10) {
            printf("Le nombre doit être inférieur à 10\n");
        }
    } while (li > 10);
    
    do {
        printf("Entrer le nombre de colonnes de la première matrice: ");
        scanf("%d", &co);
        if (co > 10) {
            printf("Le nombre doit être inférieur à 10\n");
        }
    } while (co > 10);
    
    // Saisie de la première matrice
    printf("Entrez les valeurs de la première matrice:\n");
    for (int i = 0; i < li; i++) {
        for (int j = 0; j < co; j++) {
            printf("nombre[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
            C[i][j] = A[i][j]; // Initialiser le résultat avec la première matrice
        }
    }
    
    // Multiplication des matrices suivantes
    for (int m = 1; m < n; m++) {
        int li2, co2;
        
        // Vérification de la compatibilité des dimensions
        do {
            printf("Entrer le nombre de lignes de la matrice %d (doit être égal à %d): ", m + 1, co);
            scanf("%d", &li2);
            if (li2 != co) {
                printf("Le nombre de lignes doit être égal au nombre de colonnes de la matrice précédente (%d)\n", co);
            }
        } while (li2 != co);
        
        do {
            printf("Entrer le nombre de colonnes de la matrice %d: ", m + 1);
            scanf("%d", &co2);
            if (co2 > 10) {
                printf("Le nombre doit être inférieur à 10\n");
            }
        } while (co2 > 10);
        
        // Saisie de la matrice suivante
        printf("Entrez les valeurs de la matrice %d:\n", m + 1);
        for (int i = 0; i < li2; i++) {
            for (int j = 0; j < co2; j++) {
                printf("nombre[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &B[i][j]);
            }
        }
        
        // Multiplication des matrices
        int temp[10][10] = {0};
        for (int i = 0; i < li; i++) {
            for (int j = 0; j < co2; j++) {
                for (int k = 0; k < co; k++) {
                    temp[i][j] += C[i][k] * B[k][j];
                }
            }
        }
        
        // Mise à jour des dimensions et du résultat
        co = co2;
        for (int i = 0; i < li; i++) {
            for (int j = 0; j < co; j++) {
                C[i][j] = temp[i][j];
            }
        }
    }
    
    // Affichage du résultat
    printf("Le produit des matrices est:\n");
    for (int i = 0; i < li; i++) {
        for (int j = 0; j < co; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}