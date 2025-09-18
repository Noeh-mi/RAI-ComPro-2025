// Expected Output
// Enter integer #1: 4$
// Enter integer #2: -1$
// Enter integer #3: 10$

// Results:$
// Minimum: -1$
// Maximum: 10$
// Sum: 13$
// Average: 4.33$

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int maxvalue, minvalue;
    float average;

    printf("Enter integer #1: ");
    scanf("%d", &num1);
    printf("Enter integer #2: ");
    scanf("%d", &num2);
    printf("Enter integer #3: ");
    scanf("%d", &num3);

    printf("\nResults:\n");

    // Assume that num1 is both Max and Min then compare with num2 and 3 to assign the max and min
    minvalue = num1;
    maxvalue = num1;

    // Comparing num2
    if(num2 > maxvalue) {
         maxvalue = num2;
    }
    if(num2 < minvalue) {
        minvalue = num2;
    }

    // Now comparing num3
    if(num3 > maxvalue) {
        maxvalue = num3;
    }
    if(num3 < minvalue) {
        minvalue = num3;
    }

    average = (num1 + num2 + num3)/3;

    printf("Minimum: %d\n", minvalue);
    printf("Maximum: %d\n", maxvalue);
    printf("Average: %.2f\n", average);

    return 0;
}