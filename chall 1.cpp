#include <stdio.h>
int main() {
    int nombreA;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombreA);
    if (nombreA % 2 == 0) {
        printf("%d est un nombre pair.\n", nombreA);
    } else {
        printf("%d est un nombre impair.\n", nombreA);
    }

    return 0;
}
