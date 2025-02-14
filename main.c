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
