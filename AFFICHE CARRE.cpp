#include <stdio.h>
void Afficher_carre(int tab[50], int a) {
    int i;
    for (i = 0; i < a; i++) {
        printf("%d * %d = %d\n", tab[i], tab[i], tab[i] * tab[i]);
    }
}
int main() {
    int Tab[50], i, a;
    printf("taille du tableau:");
    scanf("%d", &a);
    printf("cases du tableau:");
    for (i = 0; i < a; i++) {
        printf("Donner T[%d] = ", i + 1);
        scanf("%d", &Tab[i]);
    }
    printf(" affficher le carre: \n");
    Afficher_carre(Tab, a);
    return 0;
}
