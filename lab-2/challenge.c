#include <stdio.h>

int main() {
    int num1, num2, num3, minnum, maxnum, sum;
    float average;

    printf("Enter integer #1: ");
    scanf("%d", &num1);
    printf("Enter integer #2: ");
    scanf("%d", &num2);
    printf("Enter integer #3: ");
    scanf("%d", &num3);

    // set num1 as min and max and then compare with other num
    minnum = num1;
    maxnum = num1;
    if(num2 > maxnum) {
        maxnum = num2;
    }
    else if(num2 < minnum) {
        minnum = num2;
    }
    if(num3 > maxnum) {
        maxnum = num3;
    }
    else if(num3 < minnum) {
        minnum = num3;
    }

    sum = num1 + num2 + num3;
    average = sum / 3;

    printf("\nResults:\n");
    printf("Minimum: %d\n", minnum);
    printf("Maximum: %d\n", maxnum);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}