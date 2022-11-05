#include <stdio.h>
#include "malibrairie.h"

int main(){
    float moyenne = 0, moyennePasDivisee = 0;
    int nb = 0;
    nb = nbNotes();
    moyennePasDivisee = calculMoyenne(nb);
    moyenne = moyennePasDivisee/nb;
    printf("La moyenne est de %.2f", moyenne);
    return 0;
}

