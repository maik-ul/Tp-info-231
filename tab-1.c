 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
 int main()
 {
   bool trouve;
   int nbr,i;
   int taille = 6;
   int tab[]= {1,2,3,4,5,6};
   
    trouve = false;
   printf("entrez un entier\n: ");
   scanf("%d",&nbr);
     for(int i = 0; i < taille ; i++) {
      
        if(tab[i] == nbr) {
      trouve = true;
      break;
    }
  }
     if(trouve){
         printf("%d est dans le tableau\n", nbr);
     }else{
        printf("%d n'est pas dans le tableau\n", nbr);
     }
    printf("\n");

 return 0;
  }

