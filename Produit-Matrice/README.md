                                             INTRODUCTION
Ce programme en C permet de multiplier plusieurs matrices. ce code pemret à L'utilisateur de spécifier le nombre de matrices qu'il souhaite multiplier, ainsi que les dimensions de chaque matrice. Le produit des matrices sera ensuite calculé et affiché à l'écran.

Fonctionnalités

-Saisie du nombre de matrices à multiplier.
-Validation des dimensions des matrices (les dimensions doivent respecter les règles de la multiplication matricielle).
-Multiplication de matrices de dimensions compatibles.
-Affichage du produit des matrices résultant de la multiplication.

NOTION UTILISE
Declaration  et utilisation des tableaux static
utilisation des structure de control tel que (for,do...while)
utilisation des structure conditionnel (if)

Étape 1: Compilation du code source
Ouvrez l'editeur (visual studua code) et compilez-le avec la commande suivante :
gcc program.c -o multiplication_matrices
execution
./Produit_Matrice
RESULTAT DE LA COMPILATION
Entrer des données
Entrer le nombre de matrices que vous voulez multiplier: 2
Entrer le nombre de lignes de la première matrice: 2
Entrer le nombre de colonnes de la première matrice: 3
Entrez les valeurs de la première matrice:
nombre[1][1]: 1
nombre[1][2]: 2
nombre[1][3]: 3
nombre[2][1]: 4
nombre[2][2]: 5
nombre[2][3]: 6
Entrer le nombre de lignes de la matrice 2 (doit être égal à 3): 3
Entrer le nombre de colonnes de la matrice 2: 2
Entrez les valeurs de la matrice 2:
nombre[1][1]: 7
nombre[1][2]: 8
nombre[2][1]: 9
nombre[2][2]: 10
Sortie
Le produit des matrices est:
58    64
139   154

nombre[3][1]: 11
nombre[3][2]: 12
complexite
Multiplication de matrices : O(n * 1000)
