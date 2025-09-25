#include <stdio.h>
#include <stdlib.h>

int main() {
 int i,j,temp;
 int tab[5];

    for(i=0; i<5; i++){

   printf("entrez la valeur n %d\n:",i+1);

   scanf("%d", &tab[i]);
  }
  for (i=0; i<5; i++) {

  for (j=i+1; j<5; j++) {

   if(tab[i] < tab[j]) {

      temp=tab[i];

      tab[i]=tab[j];

      tab[j]=temp;
   }
  }
 }

  printf("valeurs triées : \n");

   for(i=0; i<5; i++){
    printf("%d", tab[i]);
  }
    printf("\n");

 return 0;
}
