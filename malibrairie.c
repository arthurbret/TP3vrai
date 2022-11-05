#include <stdio.h>
#include "malibrairie.h"

int note(char* phrase) {
    float noteEntree = 0;
    int ouiounon = 0;
    do {
        printf("Saisissez la %s note : ", phrase);
        scanf("%f", &noteEntree);
        (noteEntree <= 20) && (noteEntree >= 0) ? ouiounon = 1 : printf("La note entrée n'est pas entre 0 et 20, recomencez\n");
    } while (ouiounon == 0);
    return noteEntree;
}

int nbNotes(){
    int nb = 0;
    printf("Pour combien de notes souhaitez vous calculer la moyenne ?\n");
    scanf("%d", &nb);
    return nb;
}

int calculMoyenne(int nb){
    float moyennePasDivisee = 0, note = 0;
    int numero =2;
    do {
        printf("Saisissez la 1ère note : ");
        scanf("%f", &note);
        if (verification(note, 0, 20) == 0){printf("La note n'est pas comprise entre 0 et 20, veuillez la réécrire.\n");}
    } while (verification(note, 0, 20) == 0);
    moyennePasDivisee += note;
    for (int i = 1; i < nb; ++i, ++numero) {
        do {
            printf("Saisissez la %dème note : ", numero);
            scanf("%f", &note);
            moyennePasDivisee += note;
            if (verification(note, 0, 20) == 0){printf("La note n'est pas comprise entre 0 et 20, veuillez la réécrire.\n");}
        } while (verification(note, 0, 20) == 0);
    }
    return moyennePasDivisee;
}

int verification(int valeurAVerifier, int valeur1, int valeur2){
    int verif = 1;
    if (valeurAVerifier < valeur1||valeurAVerifier > valeur2){
        verif = 0;
    }
    return (verif);
}