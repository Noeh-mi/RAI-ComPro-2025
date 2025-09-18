#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main(void){
    struct Student students[3];
    int i, highest_scorer;
    float max;

    for(i=0;i<3;i++){
        printf("Enter Student %d's name: ", i+1);
        scanf(" %[^\n]", students[i].name);

        printf("Enter Student %d's age: ", i+1);
        scanf("%d", &students[i].age);

        printf("Enter Student %d's score: ", i+1);
        scanf("%f", &students[i].score);

        printf("\n");
    }

    for(i=0;i<3;i++){
        printf("Student %d name is %s, age %d.\n", i+1, students[i].name, students[i].age);
    }

    max = students[0].score;
    highest_scorer = 0;

    for(i=0;i<3;i++){
        if(students[i].score>max){
            max = students[i].score;
            highest_scorer = i;
        }
    }
    printf("\n");
    printf("The highest score belongs to %s at %.1f!", students[highest_scorer].name,max);
    printf("\n");
}