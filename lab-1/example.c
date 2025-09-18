#include <stdio.h>

// int main() {
//     printf("%-13s:%10d\n", "Salary", 6500);
//     printf("%-13s:%10.2f\n", "Money/Week", 1625.00);
//     printf("%-13s:%10.3f\n", "Money/Day", 232.143);
// }

int main() {
    int a, b, c;

    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    c = a + b;
    printf("Sum = %d\n", c);
    return 0;
}