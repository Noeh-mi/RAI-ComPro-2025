#include <stdio.h>

int main() {

    int time, hours, minutes;

    printf("Enter total minutes: ");
    scanf("%d", &time);

    hours = time / 60;
    minutes = time % 60;

    printf("%d minutes is %d hour(s) and %d minute(s).\n", time, hours, minutes);

    return 0;
}
