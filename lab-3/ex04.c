#include <stdio.h>

int main() {
    int CalScore, PhyScore, SciScore;
    char name[20];
    float average;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%d", &CalScore);
    printf("Enter your Physics score: ");
    scanf("%d", &PhyScore);
    printf("Enter your Science Score: ");
    scanf("%d", &SciScore);

    average = (CalScore + PhyScore + SciScore) / 3.00; // so it can print out in float properly

    if(average >= 80){
        grade = 'A';
    }
    else if(average >= 70 && average < 80){
        grade = 'B';
    }
    else if(average >= 60 && average < 70){
        grade = 'C';
    }
    else if(average >= 50 && average < 60){
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("%s, your average is %.2f. You got grade %c.\n", name, average, grade);
}