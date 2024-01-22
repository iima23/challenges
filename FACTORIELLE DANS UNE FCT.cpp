#include <stdio.h>
int factoriel(int n){
  int i, fact = 1;
  for (i = 1; i <= n; i++)
  fact*=i ;        //fact = fact * i; 
  return fact;
}
int main(){
  int nbr;
  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr); 
  printf("%d! = %d\n", nbr, factoriel(nbr));
  return 0;
}

