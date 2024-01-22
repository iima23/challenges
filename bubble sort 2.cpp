#include<stdio.h>
void fun(int T[],int taille){
    int c;
    for(int i =0;i<taille;i++){
        for(int j=i+1;j<taille;j++){
            if(T[i]>T[j]){
                c=T[i];
                T[i]=T[j];
                T[j]=c;
            }
        }

    }
}
void afficher(int T[],int taille){
    for(int i=0;i<taille;i++){
        printf("%d \n",T[i]);
    }
}
int main(){
    int taille ;
    printf("entrer la taille d'un tableau :");
    scanf("%d",&taille);
    int T[taille];
    for(int i = 0 ; i < taille ; i++){
    printf("entrer un nombre :");
    scanf("%d",&T[i]);
    }
    printf("le tableau avant le tri\n");
    afficher(T,taille);
    printf("le tableau apres le tri\n");
    fun(T,taille);
    afficher(T,taille);
}
