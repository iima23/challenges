#include<stdio.h>
#include<stdlib.h>
int main()
{
int a ;
    printf ("a est un nombre entier :")
	scanf("%d", &a);
    if (a % 2 == 0) {
        printf(" a est un nombre pair.\n", a);
    } else {
        printf("a est un nombre impair.\n", a);
    }
    return 0;
}
