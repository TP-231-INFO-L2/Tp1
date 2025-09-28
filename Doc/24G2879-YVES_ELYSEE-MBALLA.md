Rapport individuel de l'etudiant Mballa Yves Elysée  Ce programme en C permet de calculer le produit d’une matrice par un vecteur.
Il demande à l’utilisateur de saisir :
La dimension du vecteur
Les éléments du vecteur
Les dimensions de la matrice (lignes et colonnes)
Les éléments de la matrice
Il vérifie que le nombre de colonnes de la matrice est égal à la dimension du vecteur avant de calculer le produit.
Procédure d’exécution
Compilation
Ouvre un terminal dans le dossier du fichier et tape :
gcc "PRODUIT VECTEUR_ MATRICE.c" -o produit.exe
Exécution
Lance le programme :
produit.exe
Saisie des données
Entre la dimension du vecteur (≤ 5)
Saisis chaque élément du vecteur
Entre le nombre de lignes et de colonnes de la matrice
Saisis chaque élément de la matrice
Résultat
Le programme affiche le vecteur et la matrice
Si le nombre de colonnes = dimension du vecteur, il affiche le résultat du produit
Sinon, il indique que le produit est impossible
Utilité des boucles dans le code
Boucles for pour la saisie et l’affichage
Saisie des éléments du vecteur :
for (int i = 0 ; i < dim ; i++) { ... }
Affichage du vecteur :
for (int i = 0 ; i < dim ; i++) { ... }
Saisie des éléments de la matrice :
for (int i = 0; i < L; i++) {    for (int j = 0; j < C; j++) { ... }}
Affichage de la matrice :
for (int i = 0; i < L; i++) {    for (int j = 0; j < C; j++) { ... }}
Boucles pour le calcul du produit
Calcul du produit matrice × vecteur :
for (int i = 0; i < L; i++) {    R[i] = 0;    for (int j = 0; j < C; j++) {        R[i] += M[i][j] * V[j];    }}
Affichage du résultat :
for (int i = 0; i < L; i++) { ... }
En résumé :
Les boucles servent à parcourir les éléments du vecteur et de la matrice pour la saisie, l’affichage et le calcul du produit. Elles permettent de traiter chaque élément un par un, ce qui est essentiel pour manipuler des tableaux en C.
