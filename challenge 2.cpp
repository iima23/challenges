#include<stdio.h>
#include <stdlib.h>
}int main() {
    int Age; 
    printf("Entrez Age : "); 
    scanf("%d", &Age); 
    if (Age < 6) {
        printf("Erreur\n");
    }
    else if (Age >= 6 && Age <= 7) {
        printf("Poussin\n"); 
    }
    else if (Age >= 8 && Age <= 9) {
        printf("Pupille\n");
    }
    else if (Age >= 10 && Age <= 11) {
        printf("Minime\n");	
    }
    else if (Age >= 12) {
        printf("Cadet\n");
    }

    return 0;
}
