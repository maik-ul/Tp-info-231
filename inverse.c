#include <stdio.h>

int main() {
   int tE[6];
   int tS[6];
   int i;

   printf("saisir les elements du tableau initial:\n");
     for(i=0; i<6; i++) {

       printf("tE[6] = ", 0);
        scanf("%d", &tE[i]);
     }
      for(i=0; i<6; i++) {
          tS[5-i] = tE[i];
       }

    printf("les elements du tableau inverse sont: \n");

       for(i=0; i<6; i++) {
         printf("tS[6] = %d\n ", i,tS[i]);
       }

      return 0;
 }
        
