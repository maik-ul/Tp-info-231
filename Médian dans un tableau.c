#include <stdio.h>
#include <stdlib.h>

int compare(const void*a,const void*b)
{
    return (*(int*)a-*(int*)b);
}
float calculer_mediane(int tableau[],int taille){
    qsort(tableau,taille, sizeof(int),compare);
    if (taille %2==0){
    return (tableau [taille/2-1]+tableau [taille/2])/2.0;
    }else{
    return tableau [taille/2];
    }
}
int main(){
    int choix;
    do{
        printf("/n====MENU====/n");
        printf("1.Utiliser le tableau fixe/n");
        printf("2.Saisir un tableau/n");
        printf("0.Quitter/n");
        printf("Faites votre choix:");
        scanf("%d", &choix);

        switch(choix){
            case1: {
                int tableau[]= {12,4,56,7,23,89,34};
                int taille = sizeof(tableau)/sizeof(tableau[0]);
                float mediane = calculer_mediane(tableau, taille);
                printf("La médiane du tableau fixe est: %.2f/n", mediane);
                break;
            }
            case2: {
                int taille;
                printf("Entrer la taille du tableau: ");
                scanf("%d", &taille);
                int tableau [taille];
                for(int i = 0; i < taille; i++){
                    printf("Entrer l'élément %d: ", i+1);
                    scanf("%d", &tableau[i]);
                }
                float mediane = calculer_mediane(tableau, taille);
                printf("La médiane du tableau saisi est: %.2f/n",mediane);
                break;
                }
                case0:
                    printf("Au revoir!/n");
                    break;
            default:
                    printf("choix invalide!/n");
    }
} while(choix!=0);
    return 0;
}
