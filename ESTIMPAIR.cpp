#include<stdio.h>
void estImpair(int nb){
    if(nb%2 !=0){
        printf("true\n");
    }
    else
    printf("false\n");
}
int main() {
    int nb;
    printf("entrer un nombre quelconque : \n");
    scanf("%d",&nb);
    estImpair(nb);
    return 0;
}
