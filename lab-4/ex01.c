#include <stdio.h>

int main(void){
    int i, sum=0, num;
    float avg;

    for(i=1; i<=10; i++){
        printf("%d. Enter the number: ", i);
        scanf("%d", &num);

        sum = sum + num;
    }
    avg = (float)sum / 10;

    printf("total sum is %d\n", sum);
    printf("Average is %.2f", avg);
}