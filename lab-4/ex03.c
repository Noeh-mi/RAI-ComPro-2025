#include <stdio.h>

int main(void){
    int num;
    do
    {   
        printf("Enter a number: ");
        scanf("%d",  &num);
        if(num == 0){
            printf("Exiting Program... Bye\n");
        } else {
            switch(num % 2) {
                case 0:
                    printf("%d is even\n", num);
                    break;
                case 1:
                    printf("%d is odd\n", num);
                    break;
            }
        }
    } while(num != 0);
    return 0;
}