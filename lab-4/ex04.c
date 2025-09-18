#include <stdio.h>

int main(void) {
    int num, count, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication table for %d\n", num);

    for (count=1;count<=12;count++) {
        sum = num * count;
        printf("%d * %d = %d\n", num, count, sum);
    }

}