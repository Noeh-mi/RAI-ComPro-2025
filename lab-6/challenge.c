#include <stdio.h>

struct Students {
    char name[20];
    int ID, mathscore, engscore, sciscore, hisscore;
    float average;
};

int main(void){
    struct Students students[3];
    int i;

    float math_total = 0, eng_total = 0, sci_total = 0, his_total = 0;
    float top_avg = 0;
    int top_student = 0;

    for(i=0;i<3;i++){
        printf("Enter name, ID, and 4 grades for student %d:\n", i+1);
        scanf("%s %d %d %d %d %d", students[i].name, &students[i].ID, &students[i].mathscore, &students[i].engscore, &students[i].sciscore, &students[i].hisscore);

        students[i].average = (students[i].mathscore + students[i].engscore + students[i].sciscore + students[i].hisscore) / 4.0;

        math_total += students[i].mathscore;
        eng_total  += students[i].engscore;
        sci_total  += students[i].sciscore;
        his_total  += students[i].hisscore;

        if(students[i].average > top_avg){
            top_avg = students[i].average;
            top_student = i;
        }
    }

    printf("\nStudent Averages:\n");
    for(i=0;i<3;i++){
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].ID, students[i].average);
    }

    printf("\nTop Student: %s with %.2f\n", students[top_student].name, students[top_student].average);

    float math_avg = math_total / 3.0;
    float eng_avg  = eng_total  / 3.0;
    float sci_avg  = sci_total  / 3.0;
    float his_avg  = his_total  / 3.0;

    printf("\nSubject Averages:\n");
    printf("Math: %.2f\n", math_avg);
    printf("English: %.2f\n", eng_avg);
    printf("Science: %.2f\n", sci_avg);
    printf("History: %.2f\n", his_avg);

    float subject_avgs[4] = {math_avg, eng_avg, sci_avg, his_avg};
    char *subject_names[4] = {"Math", "English", "Science", "History"};

    float top_subject_avg = subject_avgs[0];
    int top_subject_index = 0;
    for(i=1;i<4;i++){
        if(subject_avgs[i] > top_subject_avg){
            top_subject_avg = subject_avgs[i];
            top_subject_index = i;
        }
    }

    printf("\nTop Subject: %s with average %.2f\n", subject_names[top_subject_index], top_subject_avg);

    return 0;
}