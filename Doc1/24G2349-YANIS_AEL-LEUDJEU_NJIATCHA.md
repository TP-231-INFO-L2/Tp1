- Cahier de suivi individuel — INF231 (TP)
- Étudiant : Leudjeu Njiatcha Yanis Ael
- Matricule : 24G2349
- Groupe : INF231_EC2
Exercices attribués :

Recherche séquentielle dans un tableau (Recherche_Sequentielle.c)
Vérification si un tableau est trié (Verification_Triage.c)

1) Objectif des exercices
🔹 Recherche séquentielle
Écrire un programme en C qui parcourt un tableau de taille n et recherche une valeur donnée val.

Si la valeur est trouvée, afficher sa position.
Sinon, indiquer qu’elle n’existe pas dans le tableau.
🔹 Test de tableau triee
Écrire un programme en C qui vérifie si un tableau d’entiers est :

trié en ordre croissant,
trié en ordre décroissant,
ou non trié.
2) Algorithmes (description)
🔹 Recherche séquentielle
Lire n (taille du tableau).
Lire les n éléments du tableau.
Lire la valeur val à rechercher.
Parcourir le tableau :
Si A[i] == val, afficher la position et arrêter.
Sinon continuer.
Si fin du parcours sans succès → afficher "valeur non trouvée".

Complexité temporelle : O(n-1).

🔹 Verification de triage
Lire n (taille du tableau).
Lire les n éléments.
Initialiser deux compteurs : asc et desc.
Comparer chaque paire (tab[i], tab[i-1]).
Si tab[i-1] <= tab[i] → on verifie si le precedent et son suivant verifie la condition si oui on affecte 1 à la variable verif on sort de la boucle  .
Sinon → verif reste avec sa valeur 2.

Après parcours :
- Si verif == 0 → tableau trié en croissant.
- Si verif == 1 → tableau trié en décroissant.
Sinon → tableau non trié.

Complexité temporelle : O(n-1).

3) Codes sources
🔹 Recherche sequentielle (Recherche_Sequentielle.c)
--> Present dans le repository Recherche sequentielle
🔹 Test de tri
--> Present dans le repository Verification_Triage

Compilation
gcc Recherche_Sequentielle.c -o prog
gcc Verification_Triage.c -o prog1
Exécution
./prog
Entrer la taille du tableau : 5

                Remplissage du tableau 

Veuillez entrer la valeur 1 : 7
Veuillez entrer la valeur 2 : 5
Veuillez entrer la valeur 3 : 4
Veuillez entrer la valeur 4 : 3
Veuillez entrer la valeur 5 : 2

Entrer une valeur a rechercher : 4
La valeur recherchée a été repérée dans le tableau à la position 3
