#include <stdio.h>
#include <stdlib.h>
int main() {
int A,B,C,Max;
printf(" Entrer A:"); 
scanf("%d",&A);
printf(" Entrer B:"); 
scanf("%d",&B);
printf(" Entrer C:"); 
scanf("%d",&C);
   if (A >= Max) 
   Max = A ; 
   if (B >= Max) 
   Max = B ;
   if (C >= Max) 
   Max = C ;
 printf("le Max est %d",Max);
return 0; 
}
