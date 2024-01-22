#include <stdio.h>
int sum(int n){
    if(n==0)
    return 0;
    return n+sum(n-1);
}
int main() {
    int N;
    printf("entrer un nombre entier :");
    scanf("%d",&N);
printf("la somme est egale :%d",sum(N));
}

