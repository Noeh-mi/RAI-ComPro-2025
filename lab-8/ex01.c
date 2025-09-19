#include <stdio.h>

float calculateCircumference(int r) {
    return 2 * 3.14 * r;
}

float calculateArea(int r) {
    return 3.14 * r * r;
}

int main() {
    float r, circumference, area;

    printf("Enter the radius in cm: ");
    scanf("%f", &r);

    circumference = calculateCircumference(r);
    area = calculateArea(r);

    printf("Circumference: %.2lf\n", circumference);
    printf("Area: %.2lf\n", area);

    return 0;
}