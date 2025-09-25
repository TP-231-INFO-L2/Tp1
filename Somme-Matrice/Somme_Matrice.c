#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, co, li;
    int A[10][10], C[10][10] = {0}; 
    
    printf("Entrer le nombre de matrices que vous voulez additionner: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("ERREUR\n");
        return 1;
    }
    
    
    int lig[10], col[10];
    
    // Saisie des n matrices
    for(int m = 0; m < n; m++) {
        printf("\n ---MATRICE N°%d/%d ---\n", m+1, n);
        
        do {
            printf("Entrer le nombre de lignes de la matrice %d: ", m+1);
            scanf("%d", &li);
            if(li > 10 || li <= 0) {
                printf("Le nombre doit être entre 1 et 10\n");
            }
        } while(li > 10 || li <= 0);
        
        do {
            printf("Entrer le nombre de colonnes de la matrice %d: ", m+1);
            scanf("%d", &co);
            if(co > 10 || co <= 0) {
                printf("Le nombre doit être entre 1 et 10\n");
            }
        } while(co > 10 || co <= 0);
        
        
        lig[m] = li;
        col[m] = co;
        
        printf("Entrez les valeurs de la matrice N° %d:\n", m+1);
        for(int i = 0; i < li; i++) {
            for(int j = 0; j < co; j++) {
                printf("nombre[%d][%d]: ", i+1, j+1);
                scanf("%d", &A[i][j]);
                
                C[i][j] += A[i][j];
            }
        }
        
        
        printf("\nMatrice %d:\n", m+1);
        for(int i = 0; i < li; i++) {
            for(int j = 0; j < co; j++) {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }
    }
    
    // Vérifications des dimensions
    for(int m = 1; m < n; m++) {
        if(lig[m] != lig[0] || col[m] != col[0]) {
            printf("\nERREUR: Toutes les matrices doivent avoir les mêmes dimensions pour être additionnées!\n");
            return 1;
        }
    }
    
    //  le résultat de l'addition
    printf("\nLa somme des %d matrices est:\n", n);
    for(int i = 0; i < lig[0]; i++) {
        for(int j = 0; j < col[0]; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}