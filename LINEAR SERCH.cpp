#include <stdio.h>
int search(int T[], int taille, int *x)
{
    for (int i = 0; i < taille; i++)
    {
        if (T[i] == *x)
        {
            return i;
        }
    }
    return -1;
}
void remplissage(int T[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);
    }
}
void afficher(int T[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%d\n", T[i]);
    }
}
int main()
{
    int taille, X, res;
    printf("Entrer la taille du tableau: ");
    scanf("%d", &taille);
    int T[taille];
    remplissage(T, taille);
    printf("__________________________\n");
    afficher(T, taille);
    printf("Entrer la valeur recherchee dans le tableau: ");
    scanf("%d", &X);
    res = search(T, taille, &X);
    if (res == -1)
    {
        printf("ELEMENT INTROUVABLE : ");
    }
    else
    {
        printf("ELEMENT TROUVE  : %d", X, res);
    }
    return 0;
}
