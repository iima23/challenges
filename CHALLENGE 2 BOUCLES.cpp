#include <stdio.h>
 int main () {
         int Largeur;
         int i,j;
         printf("nombre de lignes : ");
         scanf("%d",&Largeur);
         for(i=1; i<=Largeur; i++) {
             for(j=1; j<=i; j++) {
                 printf("* ");
             }
                 printf("\n");
         }
         return 0;
     }
