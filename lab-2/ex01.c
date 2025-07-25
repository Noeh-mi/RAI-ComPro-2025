#include <stdio.h>

int main() {
    int d;
    float f;
    char letter[2];

    printf("Please enter an integer value: ");
    scanf("%d", &d);
    printf("You entered %d\n", d);
;    printf("Please enter a float value: ");
    scanf("%f", &f);
    printf("You entered %.1f\n", f);
    printf("Please enter a character: ");
    scanf(" %c", letter);
    printf("You entered %s\n", letter);

    return 0;
}