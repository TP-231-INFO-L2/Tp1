                                  Addition de matrices en C
                                 INTRODUCTION

Ce programme en C permet d'additionner plusieurs matrices. L'utilisateur peut spécifier le nombre de matrices qu'il souhaite additionner, ainsi que les dimensions de chaque matrice. Les matrices doivent avoir les mêmes dimensions pour pouvoir être additionnées. Le programme calcule la somme des matrices et affiche le résultat.

Fonctionnalités

Demande à l'utilisateur le nombre de matrices à additionner.
Vérifie que toutes les matrices ont les mêmes dimensions avant de procéder à l'addition.
Additionne les matrices saisies et affiche le résultat.

Prérequis
Le programme nécessite un compilateur C (par exemple GCC) pour être compilé et exécuté.
Installation
Étape 1: Compilation du code source

Si vous utilisez GCC, ouvrez un terminal, naviguez jusqu'au dossier contenant le fichier source (addition_matrices.c) et compilez-le avec la commande suivante :
gcc addition_matrices.c -o addition_matrices
Pour exécuter le programme, utilisez la commande suivante dans le terminal :
./addition_matrices
 Interaction avec le programme

Une fois que le programme est exécuté, vous serez invité à entrer les informations suivantes :

Nombre de matrices à additionner.

Dimensions de chaque matrice (nombre de lignes et de colonnes).

Les éléments de chaque matrice.
Exemple d'utilisation
Entrée:
Entrer le nombre de matrices que vous voulez additionner: 2

 ---MATRICE N°1/2 ---
Entrer le nombre de lignes de la matrice 1: 2
Entrer le nombre de colonnes de la matrice 1: 2
Entrez les valeurs de la matrice N° 1:
nombre[1][1]: 1
nombre[1][2]: 2
nombre[2][1]: 3
nombre[2][2]: 4

Matrice 1:
1    2    
3    4    

 ---MATRICE N°2/2 ---
Entrer le nombre de lignes de la matrice 2: 2
Entrer le nombre de colonnes de la matrice 2: 2
Entrez les valeurs de la matrice N° 2:
nombre[1][1]: 5
nombre[1][2]: 6
nombre[2][1]: 7
nombre[2][2]: 8

Matrice 2:
5    6    
7    8    

La somme des 2 matrices est:
6    8    
10   12   

Le programme vérifiera ensuite que toutes les matrices ont les mêmes dimensions pour procéder à l'addition.

Complexité :

Si chaque matrice a des dimensions li x co (et que toutes les matrices ont les mêmes dimensions), et que tu effectues n additions, la complexité est :

O(n×li×co)
O(n×li×co)

Dans le pire des cas (avec des matrices de 10x10), cela serait simplement :

O(n×102)
O(n×10
2
)

Donc, la complexité de l'addition des matrices est O(n * 100) où n est le nombre de matrices.
