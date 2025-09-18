#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (p + i));
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            int *a = (p + j);
            int *b = (p + j + 1);
            if (*a > *b) {
                int temp = *a;
                *a = *b;
                *b = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}