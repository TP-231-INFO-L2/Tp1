Programme C : Calcul de la Médiane d’un Tableau
 Description

Ce programme en langage C permet de :

1. Demander à l’utilisateur de saisir la taille d’un tableau (jusqu’à 99 éléments).


2. Remplir le tableau avec des valeurs entières entrées par l’utilisateur.


3. Trier les éléments du tableau dans l’ordre croissant à l’aide de l’algorithme de tri par insertion.


4. Calculer et afficher la médiane du tableau.



 La médiane est définie comme :

Si la taille du tableau est impaire : c’est l’élément situé au milieu après tri.

Si la taille du tableau est paire : ce programme renvoie l’élément à la position n/2. (NB : Mathématiquement, on prend en général la moyenne des deux éléments du milieu, mais ici une simplification est utilisée).



---

 Fonctionnement du programme

1. Entrée utilisateur :

L’utilisateur saisit la taille du tableau (n).

Le programme s’assure que n ≤ 99.

L’utilisateur entre ensuite les valeurs du tableau.



2. Tri :

Le tableau est trié en ordre croissant grâce au tri par insertion.



3. Médiane :

Si n est impair → médiane = élément à la position (n+1)/2.

Si n est pair → médiane = élément à la position n/2.





---

 Exemple d’exécution

Entrer la taille du tableau : 5
Veuillez entrer la valeur 1 : 12
Veuillez entrer la valeur 2 : 7
Veuillez entrer la valeur 3 : 15
Veuillez entrer la valeur 4 : 3
Veuillez entrer la valeur 5 : 10

La mediane du tableau est : 10


---
 
Points importants

Le tri utilisé est le tri par insertion (algorithme simple mais efficace pour des petites tailles).

La médiane retournée pour un nombre pair d’éléments n’est pas la moyenne des deux valeurs centrales mais uniquement l’une d’elles (n/2).

Le programme gère les entrées supérieures à 99 en demandant à l’utilisateur de réessayer.

complexité en temps =O(n2)
complexité en espace=O(n)

---

