#include <stdio.h>
int estImpair(int nb) {
    if(nb %2 !=0) {
        printf(" True \n");
    }
    else printf("False \n");
}
int main() {
    int nb;
    printf("Donner un nombre : \n");
    scanf("%d",&nb);
     estImpair( nb);
}
