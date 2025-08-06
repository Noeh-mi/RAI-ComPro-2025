#include <stdio.h>

int main() {
    int CalScore, PhyScore, SciScore;
    char name[20];
    float average;
    int index;

    // array of letters
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%d", &CalScore);
    printf("Enter your Physics score: ");
    scanf("%d", &PhyScore);
    printf("Enter your Science Score: ");
    scanf("%d", &SciScore);

    average = (CalScore + PhyScore + SciScore) / 3;

    if(average >= 80){
        index = 0;
    }
    else if(average >= 70 && average < 80){
        index = 1;
    }
    else if(average >= 60 && average < 70){
        index = 2;
    }
    else if(average >= 50 && average < 60){
        index = 3;
    } else {
        index = 4;
    }

    printf("%s, your average is %.2f. You got grade %c.\n", name, average, grades[index]);
}