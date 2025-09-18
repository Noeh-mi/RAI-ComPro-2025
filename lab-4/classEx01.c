// #include <stdio.h>

// int main(void) {
//     int count, sum = 0;

//     for(count=1;count<=100;count++)
//     {
//         if(count%2==1)
//             sum = sum + count;
//     }
//     printf("%d\n",sum);
// }


// #include <stdio.h>

// int main(void) {
//     printf("Multiplication table\n");
//     int sum, count;

//     for (count=1;count<=12;count++) {
//         sum = 2 * count;
//         printf("2 * %d = %d\n", count, sum);
//     }

// }

#include <stdio.h>

int main(void){
    int i,j, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i <= num; i++) {
        for(j=1; j <= num; j++){
            if (i==1 || i == num || j == 1 || j == num){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}