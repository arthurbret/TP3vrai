#include <stdio.h>

int main() {
    //définition des variables
    int longueur = 0, largeur = 0;

    //demander longueur et largeur et vérifier la positivité de ces valeurs
    do {
        printf("Saisissez la longueur du rectangle :\n");
        scanf("%d", &longueur);
        printf("Saisissez la largeur du rectangle :\n");
        scanf(" %d", &largeur);
    } while (longueur<0 && largeur<0);

    //ecriture des résultats
    printf("Le périmètre du rectangle est de %d.\n", (longueur+largeur*2));
    printf("L'aire du rectangle est de %d.\n", longueur*largeur);
    return 0;
}