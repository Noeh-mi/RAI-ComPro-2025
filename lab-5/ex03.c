#include <stdio.h>

int main(void){
    int i, marks[5], sum = 0, max;

    for(i=0;i<5;i++){
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
        if(marks[i]>max){
            max = marks[i];
        }
    }
    
    printf("Total marks: %d\n", sum);
    printf("Highest marks: %d", max);
}