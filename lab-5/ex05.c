#include <stdio.h>

int main(void){
    int i, num[8], min, max;

    printf("Enter number 1: ");
    scanf("%d", &num[0]);
    min = num[0];
    max = num[0];

    for(i=1;i<8;i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
        if(num[i] < min){
            min = num[i];
        } else if(num[i] > max){
            max = num[i];
        }
    }

    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);
}