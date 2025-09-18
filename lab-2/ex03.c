#include <stdio.h>
#include <string.h>

int main() {
    int age, weight;
    float height;
    char name[10];
    char gender[2];
    char quali[20];

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%d", &weight);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", quali);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Weight: %d\n", weight);
    printf("Gender: %s\n", gender);
    printf("Education Qualification: %s\n", quali);

    return 0;
}