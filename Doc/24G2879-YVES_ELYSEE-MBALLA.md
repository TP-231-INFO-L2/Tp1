# Produit Matrice × Vecteur en C

**Auteur :** Mballa Yves Elysée
**Langage :** C

Ce programme permet de **calculer le produit d’une matrice par un vecteur** en C.

---

## Description

Le programme demande à l’utilisateur :

1. La **dimension du vecteur**.
2. Les **éléments du vecteur**.
3. Les **dimensions de la matrice** (lignes et colonnes).
4. Les **éléments de la matrice**.

Avant le calcul, il vérifie que le **nombre de colonnes de la matrice** correspond à la **dimension du vecteur**. Si ce n’est pas le cas, le produit est impossible.

---

## Compilation et exécution

### Compilation

Dans le terminal, exécuter :

```bash
gcc "PRODUIT_VECTEUR_MATRICE.c" -o produit.exe
```

### Exécution

```bash
./produit.exe
```

---

## Saisie des données

1. Entrer la dimension du vecteur (≤ 5).
2. Saisir chaque élément du vecteur.
3. Entrer le nombre de **lignes** et **colonnes** de la matrice.
4. Saisir chaque élément de la matrice.

---

## Résultat attendu

Le programme affiche :

* Le **vecteur** saisi.
* La **matrice** saisie.

Ensuite :

* Si le produit est possible, il affiche le **résultat du produit**.
* Sinon, il indique que le **produit est impossible**.

---

## Utilité des boucles

Les **boucles** permettent de parcourir les éléments du vecteur et de la matrice pour :

* La saisie
* L’affichage
* Le calcul du produit

### Exemple de code

**Saisie et affichage du vecteur :**

```c
for (int i = 0; i < dim; i++) {
    // saisie ou affichage de V[i]
}
```

**Saisie et affichage de la matrice :**

```c
for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
        // saisie ou affichage de M[i][j]
    }
}
```

**Calcul du produit matrice × vecteur :**

```c
for (int i = 0; i < L; i++) {
    R[i] = 0;
    for (int j = 0; j < C; j++) {
        R[i] += M[i][j] * V[j];
    }
}
```

**Affichage du résultat :**

```c
for (int i = 0; i < L; i++) {
    printf("%d ", R[i]);
}
```

---

## Résumé

Les boucles permettent de **traiter chaque élément un par un**, ce qui est essentiel pour manipuler les **tableaux en C**.
Elles sont utilisées pour :

* La saisie des données
* L’affichage du vecteur et de la matrice
* Le calcul du produit matrice × vecteur
