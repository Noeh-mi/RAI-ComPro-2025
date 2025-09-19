#include <stdio.h>

void sumEvenOdd(int arr[], int n, int *Sumofeven, int *Sumofodd) {
    *Sumofeven = 0;
    *Sumofodd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            *Sumofeven += arr[i];
        else
            *Sumofodd += arr[i];
    }
}

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n]; 

    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    int Sumofeven, Sumofodd;

    sumEvenOdd(arr, n, &Sumofeven, &Sumofodd);

    printf("Sum of even numbers: %d\n", Sumofeven);
    printf("Sum of odd numbers: %d\n", Sumofodd);

    return 0;
}
