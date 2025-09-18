#include <stdio.h>

int main(void){
    int num[10], i;

    for(i = 0; i <10;i++){
        printf("Enter the value %d here: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("Values in array are: ");
    for(i = 0;i < 10;i++){
         if(i<9){
             printf("%d, ", num[i]);
         } else if(i=9){
             printf("%d", num[i]);
         }
     }
     printf("\n");
}