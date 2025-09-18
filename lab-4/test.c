// #include <stdio.h>

// int main(void){
//     int num[10], i;

//     for(i = 0; i <10;i++){
//         printf("Enter the value %d here: ", i+1);
//         scanf("%d", &num[i]);
//     }

//     printf("Values in array are: ");
//     for(i = 0;i < 10;i++){
//          if(i<9){
//              printf("%d, ", num[i]);
//          } else if(i=9){
//              printf("%d", num[i]);
//          }
//      }
//      printf("\n");
// }

// #include <stdio.h>

// int main(void){
//     int i, original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     printf("Reversed array: ");
//     for(i=8;i>=0;i--){
//         if(i>0){
//             printf("%d, ", original[i]);
//         } else {
//             printf("%d", original[i]);
//         }
//     }
//     printf("\n");
// }

// #include <stdio.h>

// int main(void){
//     int i, score[5], sum=0, max;

//     for(i=0;i<=4;i++){
//         printf("Enter the marks of student %d: ", i + 1);
//         scanf("%d", &score[i]);
//     }

//     max=score[0];
//     for(i=0;i<=4;i++){
//         sum=sum+score[i];
//         if(score[i]>max){
//             max=score[i];
//         }
//     }
//     printf("Total marks: %d\n", sum);
//     printf("Highest marks: %d", max);
// }

// #include <stdio.h>

// int main(void){
//     int i, num[10], oddnums[10], oddi = 0, evennums[10], eveni = 0;

//     for(i=0;i<10;i++){
//         printf("Enter value %d: ", i + 1);
//         scanf("%d", &num[i]);
//     }

//     for(i=0;i<10;i++){
//         if(num[i] % 2 == 0){
//             evennums[eveni] = num[i];
//             eveni++;
//         } else {
//             oddnums[oddi] = num[i];
//             oddi++;
//         }
//     }

//     printf("\nEven numbers: ");
//     for(i=0;i<eveni;i++){
//         if(i<eveni - 1){
//             printf("%d, ", evennums[i]);
//         } else {
//             printf("%d\n", evennums[i]);
//         }
//     }

//     printf("Odd numbers: ");
//     for(i=0;i<oddi;i++){
//         if(i<oddi - 1){
//             printf("%d, ", oddnums[i]);
//         } else {
//             printf("%d\n", oddnums[i]);
//         }
//     }
// }

#include <stdio.h>

int main(void){
    int i, num[8], min, max;

    for(i=0;i<8;i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];

    for(i=0;i<8;i++){
        if(num[i]<min){
            min = num[i];
        } else if(num[i]>max){
            max = num[i];
        }
    }
    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);
}