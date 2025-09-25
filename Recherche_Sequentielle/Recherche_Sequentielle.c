#include <stdio.h>

int main(){
    int tab[100];
    int val,n,trouve = 0;

    do{
        printf("\nEntrer la taille du tableau : ");
        scanf("%d",&n);
        if(n > 99 ){
            printf("Limite maximale depasser reessayer svp \n");
        }
    }while(n>99);
    
    printf("\n\t\tRemplissage du tableau \n\n");

    // Ici j'initialise mon tableau avec une boucle for

    for(int i=0;i<n;i++){
        printf("Veuillez entrer la valeur %d : ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("\n");

    printf("Entrer une valeur a rechercher : ");
    scanf("%d",&val);

    // Maintenant je procede a la recherche avec une boucle for pour parcourir le tableau

    for(int i=0;i<n;i++){
        if(tab[i]== val){
            printf("La valeur recherchée a été repérée dans le tableau à la position %d\n",i+1);
            trouve = 1;
            // J'ai fais ceci pour que si la valeur est trouvée on sort de la boucle
        break; 
        }
    }
    if(!trouve){
        printf("La valeur n’a pas été trouvée dans le tableau");
    }
    return 0;
}