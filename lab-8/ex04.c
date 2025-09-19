#include <stdio.h>

int countVowels(char message[]) {
    int count = 0;
    int i = 0;
    while (message[i] != '\0') {
        char ch = message[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char message[100];

    printf("Input: ");
    scanf("%[^\n]", message);

    int result = countVowels(message);

    printf("Number of vowels: %d\n", result);

    return 0;
}