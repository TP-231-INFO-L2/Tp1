# Vérification si un tableau est trié

##  Problème

Lorsqu’on manipule des données dans un tableau ou une liste, il est souvent nécessaire de savoir si elles sont **triées** (dans l’ordre croissant ou décroissant).  
Cette vérification est importante car de nombreux algorithmes de recherche (par exemple la **recherche dichotomique**) ou de traitement de données nécessitent un tableau **déjà trié**.

##  Principe

Le principe est simple :  
- On parcourt le tableau de jusqu'au nombre total puis  .  
- On compare chaque élément avec son **suivant**.  
- Si une comparaison viole l’ordre attendu (croissant ou décroissant), le tableau n’est **pas trié** on sort de la boucle avec break.  
- Sinon, si toutes les comparaisons sont valides, le tableau est trié.  

---

##  Complexite
-Complexite Temporelle : O(n-1) car on ne va pas parcourir tous le tableau

## Execution 
-Ouvrir un Terminal puis executer la commande : gcc Verification_Triage -o verif
-Puis : ./verif
