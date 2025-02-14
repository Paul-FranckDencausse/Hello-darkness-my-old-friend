

# Documentation du Programme de Salutation en C

## Description

Ce programme est un exemple simple en langage C qui demande à l'utilisateur de saisir son nom et affiche ensuite un message de salutation personnalisé.

## Fonctionnalités

- Demande à l'utilisateur de saisir son nom.
- Affiche un message de salutation utilisant le nom saisi.

## Fichiers

- `main.c` : Fichier source contenant le code du programme.

## Instructions de Compilation

Pour compiler ce programme, vous pouvez utiliser un compilateur C standard comme `gcc`. Ouvrez un terminal et exécutez la commande suivante :

```bash
gcc -o salutation main.c
```

Cela générera un exécutable nommé `salutation`.

## Instructions d'Exécution

Pour exécuter le programme compilé, utilisez la commande suivante dans le terminal :

```bash
./salutation
```

## Exemple d'Utilisation

```
Entrez votre nom : Alice
Bonjour, Alice ! Bienvenue dans le monde de la programmation en C.
```

## Code Source

```c
#include <stdio.h>

int main() {
    // Déclaration d'une variable pour stocker le nom de l'utilisateur
    char nom[100];

    // Demande à l'utilisateur de saisir son nom
    printf("Entrez votre nom : ");
    scanf("%s", nom);

    // Affiche un message de salutation
    printf("Bonjour, %s ! Bienvenue dans le monde de la programmation en C.\n", nom);

    return 0;
}
```

## Explications du Code

- **`#include <stdio.h>`** : Inclut la bibliothèque standard d'entrée-sortie pour utiliser `printf` et `scanf`.
- **`int main()`** : Fonction principale où l'exécution du programme commence.
- **`char nom[100];`** : Déclare une variable `nom` pour stocker le nom de l'utilisateur.
- **`printf("Entrez votre nom : ");`** : Affiche un message demandant à l'utilisateur de saisir son nom.
- **`scanf("%s", nom);`** : Lit l'entrée de l'utilisateur et la stocke dans la variable `nom`.
- **`printf("Bonjour, %s ! Bienvenue dans le monde de la programmation en C.\n", nom);`** : Affiche un message de salutation personnalisé.
- **`return 0;`** : Indique que le programme s'est terminé avec succès.

## Remarques

- Ce programme est un exemple basique pour illustrer l'utilisation des fonctions d'entrée-sortie en C.
- Le programme ne gère pas les espaces dans les noms (par exemple, "Jean Dupont" sera lu comme "Jean"). Pour gérer les espaces, il faudrait utiliser `fgets` au lieu de `scanf`.
