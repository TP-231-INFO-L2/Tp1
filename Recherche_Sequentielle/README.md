🔍 Recherche Séquentielle

##  Problème
Lorsqu’on travaille avec des tableaux ou des listes de données, il est souvent nécessaire de vérifier si une **valeur donnée** est présente dans cette collection et, si oui, **à quelle position**.  

Par exemple :  
- Chercher le numéro d’un client dans une liste.  
- Trouver une note spécifique dans un tableau de résultats.  

La **recherche séquentielle** répond à ce besoin de manière simple : elle consiste à parcourir **élément par élément** la structure de données pour trouver l’élément recherché.

---

##  Principe
La recherche séquentielle est l’un des algorithmes les plus simples de recherche.  
Elle fonctionne ainsi :

1. On commence la recherche à partir du **premier élément** du tableau.  
2. On compare chaque élément avec la **valeur recherchée**.  
3. Si on trouve une correspondance, on renvoie la **position** de l’élément.  
4. Si on arrive à la fin du tableau sans correspondance, on conclut que l’élément **n’existe pas**.

**Important :** le tableau **n’a pas besoin d’être trié**, ce qui rend cette méthode très flexible, mais pas toujours efficace pour les grands ensembles de données.

##  Complexite
-Complexite Temporelle : O(n-1)

## Execution 
-Ouvrir un Terminal puis executer la commande : gcc Verification_Triage -o verif
-Puis : ./verif