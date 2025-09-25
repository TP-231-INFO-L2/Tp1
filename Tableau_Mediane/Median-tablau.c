#include <stdio.h>

int main(){
    int tab[100];
    int n = 0,val = 0,j=0;
    
    do{
        printf("\nEntrer la taille du tableau : ");
        scanf("%d",&n);
        if(n > 99 )
            printf("Limite maximale depasser reessayer svp \n");
    }while(n>99);

    /*Generalement pour trouver la mediane d'un tableau 
    nous devons ordonnee les elts suivant l'ordre croissant 
    puis prendre l'element qui est egale a lataille du tableau et diviser par deux */
    
    // Ici j'initialise mon tableau avec une boucle for

    for(int i=0;i<n;i++)
    {
        printf("Veuillez entrer la valeur %d : ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("\n");

    // Rangeons le tableau selon l'ordre croissant
    // Nous  utiliserons le tri par insertion

     for(int i=1;i<n;i++)
     {
        val = tab[i];
        j = i;
        while (tab[j-1]> val && j > 0)
        {
            tab[j] = tab[j-1];   
            j = j-1;    
            tab[j] = val; 
        } 
    }
    printf("\n");

    if(n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if(i+1 == n/2){
                printf("La mediane du tableau est : %d \n",tab[i]);
            }
        }
        
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if(i+1 == (n+1)/2)
            {
                printf("La mediane du tableau est : %d \n",tab[i]);
            }
        }
    }
}
