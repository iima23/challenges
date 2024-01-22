#include <stdio.h>
int main()
{
int i, j=0, H, L;
printf("Nombre de lignes: ");
scanf("%d",&L);
for(i=0; i<=L; i++){
	for(j=1; j<=L; j++){
	printf(" *");
}
printf("\n");
}

return 0;
}

