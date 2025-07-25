#include <stdio.h>

int main (){
    int ID;
    char name[20];
    float ProScore, PhysScore, CalScore, gpa;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter your Student ID: ");
    scanf("%d", &ID);
    printf("Enter your Programming Score: ");
    scanf("%f", &ProScore);
    printf("Enter your Physics score: ");
    scanf("%f", &PhysScore);
    printf("Enter your Calculus score: ");
    scanf("%f", &CalScore);

    gpa = (ProScore + PhysScore + CalScore) / 3;

    printf("Hi %s(%d)! Your GPA is %.2f\n", name, ID, gpa);

    return 0;
}