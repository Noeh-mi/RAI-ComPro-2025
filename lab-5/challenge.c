#include <stdio.h>

int main(void){
    int i, j, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int num[n];

    printf("Enter %d integers: ", n);
    for(i=0;i<n;i++){
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++) {
        int count = 0;
        int alreadyCounted = 0;

        for (j = 0; j < i; j++) {
            if (num[i] == num[j]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted == 0) {
            for (j = 0; j < n; j++) {
                if (num[j] == num[i]) {
                    count++;
                }
            }
            printf("Number %d occurs %d time.\n", num[i], count);
        }
    }
}