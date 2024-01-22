#include<stdio.h>
#include<stdlib.h>
void trier (int tableau[],int taille){
	for(int i=0;i<taille;i++){      // OU i<=taille - 1::
		for(int j=i+1;j<taille;j++){
			if(tableau[i]>tableau[j]){
				int x=tableau [i];
				tableau[i]=tableau[j];
				tableau[j]=x;
			}
		}
	}
}//AVANT
int main(){
	int tableau[]={9,5,4,3,2,11,-6};
	int taille=sizeof(tableau)/sizeof(tableau[0]);
    printf("le tableau avant le triage :\n");
	for(int i=0;i<taille;i++){
		printf("%d",tableau[i]);
		printf("\n");
} // TRIAGE
trier (tableau,taille);
printf("le tableau apres le triage:\n");
for(int i=0;i<taille;i++){
	printf("%d",tableau[i]);
	printf("\n");
}
	}

