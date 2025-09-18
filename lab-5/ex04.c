#include <stdio.h>

int main(void){
    int i, num[10], oddi = 0, eveni = 0;

    for(i=0;i<10;i++){
        printf("Enter value %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<10;i++){
        if(num[i] % 2 == 0){
            eveni++;
        } else {
            oddi++;
        }
    }

    printf("\nEven numbers: %d\n", eveni);
    printf("Odd numbers: %d\n", eveni);
}