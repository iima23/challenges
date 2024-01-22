#include <stdio.h>
void Permuter(int *a, int *b){
    int N;
    N=*a;
    *a=*b;
    *b=N;
}
int main(){
    int x,y;
    printf("entrer x et y: \n");
    scanf("%d %d", &x,&y);
    printf("Avant la permutation : x = %d et y = %d\n",x,y);
    Permuter(&x,&y);
    printf("Apres: x = %d et y = %d",x,y);

}
