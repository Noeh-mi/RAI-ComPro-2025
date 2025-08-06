#include <stdio.h>

int main() {
    float height, radius, volume;

    printf("Enter cone height: ");
    scanf("%f", &height);
    printf("Enter cone base radius: ");
    scanf("%f", &radius);

    volume = (3.14 * radius * radius * height) / 3;

    printf("Cone volume = %.3f\n", volume);

    if(volume > 260){
        printf("This cone is perfect for Supun project\n");
    } else {
        printf("This cone is not fit for this project\n");
    }
}