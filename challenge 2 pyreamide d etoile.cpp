#include <stdio.h>
 int main () {
         int Largeur;
         int i,j;
         printf(" entrer le nombre de ligne : ");
         scanf("%d",&Largeur);
         for(i=1; i<=Largeur; i++) {
             for(j=1; j<=i; j++) {
                 printf(" * ");
             }
                 printf("\n");
         }
         return 0;
     }
     
