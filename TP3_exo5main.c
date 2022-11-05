#include <stdio.h>

int main(){
    int valeurEntree = 0;
    printf("Quelle boisson souhaitez vous ?\n");
    scanf("%d", &valeurEntree);
    switch(valeurEntree){
        case 1 :{
            printf("Vous avez choisi un Coca-Cola");
            break;}
        case 2 :{
            printf("Vous avez choisi un Fanta");
            break;}
        case 3 :{
            printf("Vous avez choisi un Ice-Tea");
            break;}
        case 10 :{
            printf("Vous avez choisi un café");
            break;}
        case 11 :{
            printf("Vous avez choisi un chocolat chaud");
            break;}
        default :{
            printf("Cette boisson n'existe pas");
            break;}
    }
    return(0);
}