#include<stdio.h>
 void bonjour(char prenom[30]) {
    printf("bonjour :%s\n", prenom);
}
int main() {
    char prenom[(30)];  
    printf("ecrire le prenom : ");
    scanf("%s",&prenom);
    bonjour(prenom);
    return 0;
}
