#include <stdio.h>

int main() {
    // Initialisation des variables
    int entier = 0;
    const int trois = 3;

    // Demander un entier et vérifier la positivité de ces valeurs
    printf("Saisissez un entier :\n");
    scanf("%d", &entier);

    // On regarde si l'entier est divisible par 3
    printf("L'entier %d %s divisible par 3\n", entier, (entier % trois) == 0 ? "est" : "n'est pas");

    // On regarde si l'entier est supérieur ou égal à 10
    printf("L'entier %d %s à 10\n", entier, entier >= 10 ? "est supérieur" : "est inférieur");
}