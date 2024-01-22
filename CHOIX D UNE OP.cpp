#include <stdio.h>
int addition(int a, int b) {
    return a + b;
}
int soustraction(int a, int b) {
    return a - b;
}
int multiplication(int a, int b) {
    return a * b;
}
int main() {
    int choisir, n1, n2, resultat;
    printf("choisis une op:\n");
    printf("addition\n");
    printf("soustraction\n");
    printf("multiplication\n");
    printf("ton choix est : ");
    scanf("%d", &choisir);
    printf("Entrez deux nombres : ");
    scanf("%d %d", &n1, &n2);
    switch (choisir) {
        case 1:
            resultat = addition(n1, n2);
            printf("Le resultat de l'addition est : %d\n", resultat);
            break;
        case 2:
            resultat = soustraction(n1, n2);
            printf("Le resultat de la soustraction est : %d\n", resultat);
            break;
        case 3:
            resultat = multiplication(n1, n2);
            printf("Le resultat de la multiplication est : %d\n", resultat);
            break;
        default:
            printf("autre op\n");
            break;
    }
    return 0;
}

