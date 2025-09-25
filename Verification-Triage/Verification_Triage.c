#include <stdio.h>

int main(){
    int tab[100];
    int n = 0,verif = 2;

    do{
        printf("\nEntrer la taille du tableau : ");
        scanf("%d",&n);
        if(n >99 )
        {
            printf("Limite maximale depasser reessayer svp \n");
        }
    }while(n>99);

    printf("\n\t\tRemplissage du tableau \n\n");

    // Ici j'initialise mon tableau avec une boucle for

    for(int i=0;i<n;i++)
    {
        printf("Veuillez entrer la valeur %d : ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("\n");

    // Maintenant je vais verifier si le tableau est trie ou non
    for(int i = 1;i<n;i++)
    {
        if(tab[i-1] > tab[i])
        {
            verif = 1;
            break;
            // je fais un break pour sortir de la boucle une fois que j'ai trouver que le tableau est trie
        }
        if(tab[i-1] < tab[i])
        {
            verif = 0;
            break;
            // je fais un break pour sortir de la boucle une fois que j'ai trouver que le tableau est trie
        } 
    }
    if(verif == 0)
    {
        printf("Tableau Trie Suivant L'ordre Croissant \n");
    }
    else if(verif == 1)
    {
        printf("\nTableau Trie Suivant L'ordre Decroissant \n");
    }
    else 
    {
        printf("Tableau Non Trier\n");
    }

    return 0;
}