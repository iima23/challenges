#include<stdio.h>
int recherchelineaire(int tableau[],int taille,int cible){
	for(int i=0;i<taille;i++){
		if(tableau[i]==cible){
			return i;
			
		}
	}
}
int main(){
	int tableau[]={1,24,22,1,8};
	int taille=sizeof(tableau) / sizeof(tableau [0]);
	int valeurcible = 8;
	int position = recherchelineaire(tableau,taille,valeurcible);
	if(position !=1){
		printf("la valeur %d est trouvee\n",valeurcible ,position);
	}
	else {
	    printf("la valeur %d n'est pas trouvee \n",valeurcible);
	}
	return 0;
	}
