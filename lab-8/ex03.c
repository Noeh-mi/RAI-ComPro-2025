#include <stdio.h>

int calculate(int a, int b) {
    return (a * a) + (b * b);
}

int main(){
    int a, b, sum;

    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);

    sum = calculate(a, b);

    printf("Sum of squares of %d and %d is: %d\n", a, b, sum);

    return 0;
}