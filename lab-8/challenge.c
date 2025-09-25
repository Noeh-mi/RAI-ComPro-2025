#include <stdio.h>

float AverageScore(int grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + grades[i];
    }
    return (float) sum / n;
}

int HighestScore(int grades[], int n) {
    int high = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] > high) {
            high = grades[i];
        }
    }
    return high;
}

int LowestScore(int grades[], int n) {
    int low = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] < low) {
            low = grades[i];
        }
    }
    return low;
}

void Pass(char names[][100], int grades[], int n) {
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 60) {
            printf("%s\n", names[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][100];
    int grades[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", names[i]);
        printf("Enter grade of %s: ", names[i]);
        scanf("%d", &grades[i]);
    }

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", AverageScore(grades, n));
    printf("Highest grade: %d\n", HighestScore(grades, n));
    printf("Lowest grade: %d\n", LowestScore(grades, n));

    printf("\nStudents who passed:\n");
    Pass(names, grades, n);

    return 0;
}