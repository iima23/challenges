#include<stdio.h>
#include<stdlib.h>
int ** Reserver(int n, int m)
{
     int **p;
     int i;
     p=(int **)malloc(n*sizeof(int *));
     for(i=0;i<n;i++)
        p[i]=(int *)malloc(m*sizeof(int));
     return p;
}
void Lire(int **p, int n, int m)
{
     int i,j;
     printf("Entrez les elements du tableau:\n");
     for(i=0;i<n;i++)
        for(j=0;j<m;j++)
           scanf("%d",&p[i][j]);
}
void Afficher(int **p, int n, int m)
{
     int i,j;
     printf("Les elements du tableau:\n");
     for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
           printf("%3d ",p[i][j]);
        printf("\n");
     }
}
void Liberer(int **p, int n)
{
     int i;
     for(i=0;i<n;i++) free(p[i]);
     free(p);
}
int main()
{
    int **t;
    int n,m;
    int ** Reserver(int,int);
    void Lire(int **,int,int);
    void Afficher(int **,int,int);
    void Liberer(int **,int);
    printf("Entrez le nombre de lignes: ");
    scanf("%d",&n);
    printf("Entrez le nombre de colonnes: ");
    scanf("%d",&m);
    t=Reserver(n,m);
    Lire(t,n,m);
    Afficher(t,n,m);
    Liberer(t,n);
    system("pause");
    return 0;
}
