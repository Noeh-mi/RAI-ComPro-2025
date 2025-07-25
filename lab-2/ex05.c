#include <stdio.h>

int main() {
    char Fname[30], Lname[30];
    char college[40];
    int age;
    float height;

    printf("Enter your full name: ");
    scanf("%s %s", Fname, Lname);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your University name: ");
    scanf(" %[^\n]", college); // To allow for full names

    printf("\nHi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f tall\n", Lname[0], Fname, college, age, height);

    return 0;
}