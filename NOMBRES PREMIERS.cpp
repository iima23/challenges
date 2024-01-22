#include <stdio.h>
#include <stdlib.h>
bool isPremier (int p){
	return 0;
}
int main() {
    int p, i, N;
    printf("Donnez un entier : \n");
    scanf("%d", &p);
    if (p == 0 || p == 1) {
        printf("FALSE.\n", p);
    } else {
        N = 1;
        for (i = 2; i < p; i++) {
            if (p % i == 0) {
                N = 0;
            }
        }
        if (N == 1) {
            printf("TRUE.\n", p);
        } else {
            printf("FALSE.\n", p);
        }
    }

    return 0;
}
