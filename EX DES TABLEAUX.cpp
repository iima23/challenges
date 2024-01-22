#include <stdio.h>

int main() {
    int table_1[5], table_2[5], table_3[5];
    int user, i = 0;

    while(i < 5){
        printf("please enter the first number :");
        scanf("%d", &user);
        table_1[i] = user;
        printf("please enter the second number :");
        scanf("%d", &user);
        table_2[i] = user;
        table_3[i] = table_1[i] * table_2[i];

        i++;
    }

        for(int j = 0; j < 5; j++){
            printf("%d\n", table_3[j]);
        }



    return 0;
}
