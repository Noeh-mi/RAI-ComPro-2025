#include <stdio.h>

int main() {
    int intergervalue;
    float floatvalue;
    char charvalue[1];

    printf("Please enter an integer value: ");
    scanf("%d", &intergervalue);
    printf("You entered: %d\n", intergervalue);
    printf("Please enter a float value: ");
    scanf("%f", &floatvalue);
    printf("You entered: %f\n", floatvalue);
    printf("Please enter a character: ");
    scanf("%s", charvalue);
    printf("You entered: %s\n", charvalue);

    return 0;
}