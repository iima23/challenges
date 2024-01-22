#include <stdio.h>
bool isValide(int n){
    while(n<=1){
    printf("entrer un n valide");
	scanf("%d",&n);
	}
}
bool isPremier(int n){
	int sum=0;
	isValide(n);
	for(int i=1;i*i<n;i++){
		if(n%i==0){
			sum++;
		}
	}
   if(sum==1)
   return true;
   else
   return false;
}
int main(){
	int n;
	printf("entrer un nombre :");
	scanf("%d",&n);
	if(isPremier(n))
	{
		printf("true");
    }
	else
	{
	printf("false");
}
return 0;
}


