#include <stdio.h>

int main() {
    int num;
    int inRange;
    int index;

    // Message Array:
    char *messages[] = {
        "is even",         // <- index 0
        "is odd",          // <- index 1
        "is out of range"  // <- index 2
    };

    printf("Enter a number: ");
    scanf("%d", &num);

    // Checks if number is in the range [0, 100]
    inRange = (num >= 0) && (num <= 100);
 
    // Calculate message index:
    // If in range: use num % 2 (0 for even, 1 for odd)
    // If out of range: force index = 2
    index = (1 - inRange) * 2 + inRange * (num % 2);

    printf("%d %s\n", num, messages[index]);

    return 0;
}