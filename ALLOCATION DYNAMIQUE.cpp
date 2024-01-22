#include <stdio.h>
#include <stdlib.h>
char *Reserver(int taille) {
    char *chaine = (char *)malloc(taille * sizeof(char)); //reservation de l'espace memoire
    if (chaine == NULL) {
        printf("Erreur d'allocation de mémoire \n");
    }
    return chaine;
}
int main() {
    int taille;
    printf("Entrer la taille de la chaine de caracteres : ");
    scanf("%d", &taille);
    char *chaine = Reserver(taille);
    printf("Saisir la chaine de caracteres : ");
    scanf("%s", &chaine);
    printf("La chaine de caracteres est : %s\n", chaine);
    free(chaine);
    return 0;
}
