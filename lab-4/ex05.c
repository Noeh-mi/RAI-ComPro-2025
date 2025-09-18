#include <stdio.h>

int main(void){
    int num, i = num, sum=1;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = num;i>=1;i--){
        sum = sum * i;
    }
    printf("Factorial of %d is %d\n", num, sum);
}