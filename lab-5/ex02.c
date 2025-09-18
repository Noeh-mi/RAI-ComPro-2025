#include <stdio.h>

int main(void){
    int i, original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Reversed array: ");
    for(i=8;i>=0;i--){
        if(i>0){
            printf("%d, ", original[i]);
        } else {
            printf("%d\n", original[i]);
        }
    }
}