#include<stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,som,prod;
	scanf("%f", &a);
    scanf("%f", &b);
	som = a +b ; // calcul de la somme 
	prod= a *b ; //calcul du produit
	if(som>=0) 
	printf("la somme est positive\f");
	else  
	printf("la somme est negative\f");
	if(prod>=0)
	printf("le produit est positif\f");
	else 
	printf("le produit est negatif\f");
	
	
}
