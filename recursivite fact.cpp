#include<stdio.h>
int fact(int nbr){
    int STOP_POINT = 0;
    if(nbr==STOP_POINT)
    return 1;
    else if(nbr<0)

    return 0;
    else
    return nbr*fact(nbr-1);
}
int main(){
    int nbr;
    printf("entrer le nombre: ");
    scanf("%d", &nbr);
    if(fact(nbr)==0)
    printf("Invalid");
    else
    printf("le factoriel de l'input est : %d",fact(nbr));

