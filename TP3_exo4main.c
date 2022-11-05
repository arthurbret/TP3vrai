#include <stdio.h>


int main() {
    // Initialisation des variables
    int age = 0, tarif = 0, etudiant = 0;
    const int tarifEnfant = 4, tarifJeuneSenior = 6, tarifPlein = 9;
    const char* phrase = "Vous devrez payer";


    // Demande de l'âge
    do {
        printf("Quel est votre âge ?\n");
        scanf("%d", &age);
    } while (age<0);

    // Demande du statut étudiant si age entre 18 et 27 inclus
    if (age>=18 && age<=27){
        printf("Êtes-vous étudiant ? (répondez avec 1 : Oui ou 2 : Non)\n");
        scanf("%d", &etudiant);
        printf("%s", etudiant==1 ? "Vous béneficiez du tarif étudiant\n" : "Vous ne béneficiez pas du tarif étudiant\n");
    }

    // Code
    if (age<12){
        tarif = tarifEnfant;
    }
    else if (age<=17 || (age<=27 && etudiant==1))
    {
        tarif = tarifJeuneSenior;
    }
    else if (age>=65)
    {
        tarif = tarifJeuneSenior;
    }
    else if (etudiant != 1)
    {
        tarif = tarifPlein;
    }
    else
    {
        printf("Il y a eu un problème");
    }

    printf("%s %d €", phrase, tarif);
}