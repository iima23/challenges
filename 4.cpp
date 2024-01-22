#include <stdio.h>
#include <math.h>
int main() {
    float B, E, P;

    printf("Entrez B:\n");
    scanf("%f", &B);

    printf("Entrez E:\n");
    scanf("%f", &E);

    P = pow(B, E);

    printf("La puissance de %.2f et %.2f est: %.2f\n", B, E, P);

    return 0;
}
