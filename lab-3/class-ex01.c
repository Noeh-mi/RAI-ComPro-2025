// #include <stdio.h>

// int main(){
//     int num1, num2, menu;
//     float result;
    
//     printf("Enter Num1: ");
//     scanf("%d", &num1);
//     printf("Enter Num2: ");
//     scanf("%d", &num2);

//     printf("Calculator operation: \n");
//     printf("  1. +\n");
//     printf("  2. -\n");
//     printf("  3. *\n");
//     printf("  4. /\n");
//     printf("  5. %%\n");
//     printf("Please choose the calculator operation: ");
//     scanf("%d", &menu);

//     if (menu == 1) {
//         result = num1 + num2;
//         printf("Answer: %d + %d = %.2f\n", num1, num2, result);
//     }
//     else if (menu == 2){
//         result = num1 - num2;
//         printf("Answer: %d - %d = %.2f\n", num1, num2, result);
//     }
//     else if(menu == 3){
//         result = num1 * num2;
//         printf("Answer: %d * %d = %.2f\n", num1, num2, result);
//     }
//     else if(menu == 4){
//         if (num2 != 0) {
//             result = (float)num1 / num2; // cast to float to avoid integer division
//             printf("Answer: %d / %d = %.2f\n", num1, num2, result);
//         } else {
//             printf("Error: Division by zero!\n");
//         }
//     } 
//     else if (menu == 5){
//         result = num1 % num2;
//         printf("Answer: %d %% %d = %.2f\n", num1, num2, result);
//     } else {
//         printf("Invalid choice!\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int num1, num2, menu;
    float result;

    printf("Enter Num1: ");
    scanf("%d", &num1);
    printf("Enter Num2: ");
    scanf("%d", &num2);

    printf("Calculator operation: \n");
    printf("  1. +\n");
    printf("  2. -\n");
    printf("  3. *\n");
    printf("  4. /\n");
    printf("  5. %%\n");
    printf("Please choose the calculator operation: ");
    scanf("%d", &menu);

    switch(menu){
        case 1:
            result = num1 + num2;
            printf("Answer: %d + %d = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Answer: %d - %d = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Answer: %d * %d = %.2f\n", num1, num2, result);
            break;
        case 4:
            result = num1 / num2;
            printf("Answer: %d / %d = %.2f\n", num1, num2, result);
            break;
        case 5:
            result = num1 % num2;
            printf("Answer: %d %% %d = %.2f\n", num1, num2, result);
            break;
    }
    return 0;
}