// Expected Output
// Enter your full name: Poom Konghuyrob
// Enter your age: 19
// Enter your height: 160.5
// Enter you University name: KMITL

// Hi! Everyone. This is K.Poom from KMITL. I am 19 years old and my height is 
// 160.5 cm tall.

#include <stdio.h>

int main() {
    char FullName[30];
    char college[40];
    int age;
    float height;

    printf("Enter your full name: ");
    scanf(" %[^\n]", FullName);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your University name: ");
    scanf(" %[^\n]", college); // To allow for full names

    printf("\nHi! Everyone. This is %s from %s. I am %d years old and my height is %.1f tall", FullName, college, age, height);

    return 0;
}