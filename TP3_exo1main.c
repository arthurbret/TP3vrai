#include <stdio.h>

int main() {
    int valeur1 = 0, valeur2 = 0;
    printf("Entrer valeur 1\n");
    scanf("%d", &valeur1);
    printf("Entrer valeur 2\n");
    scanf(" %d", &valeur2);
    printf("La valeur la plus grande est %d.", (valeur1<valeur2) ? valeur2 : valeur1);
    return 0;
}