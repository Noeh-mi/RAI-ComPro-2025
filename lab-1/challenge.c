#include <stdio.h>

//The names are Alice, Bob, Charlie

int main() {
    printf("+----------------+--------+--------+\n");
    printf("|%-16s|%8s|%8s|\n", " Name", "Score1 ", "Score2 ");
    printf("+----------------+--------+--------+\n");
    printf("|%*s|%*d |%*d |\n", -16, " Alice", 7, 85, 7, 90);
    printf("|%*s|%*d |%*d |\n", -16, " Bob",  7, 78, 7, 82);
    printf("|%*s|%*d |%*d |\n", -16, " Charlie", 7, 92, 7, 88);
    printf("+----------------+--------+--------+\n");
}