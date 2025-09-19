#include <stdio.h>

int checkforPrime(int n) {
    if (n <= 1) return 0;  // <-- Not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // <-- Not prime
        }
    }
    return 1;  // <-- Prime
}

void showPrime(int start, int end) {
    printf("The prime numbers within the intervals are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (checkforPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    showPrime(start, end);

    return 0;
}