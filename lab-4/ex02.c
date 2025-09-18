#include <stdio.h>

int main(void){
    int i = 1, sum = 0, num;

    while(i <= 10){
        printf("%d. Enter the number: ", i);
        scanf("%d", &num);

        sum = sum + num;
        i++;
    }

    printf("total sum is %d\n", sum);
}