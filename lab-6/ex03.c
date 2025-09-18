#include <stdio.h>
#include <string.h>
#include <math.h>

struct point {
    float x, y;
};

int main(void) {
    struct point p[2];
    int i;
    float distance;

    for(i=0;i<2;i++){
        printf("x%d: ", i + 1);
        scanf("%f", &p[i].x);
        printf("y%d: ", i + 1);
        scanf("%f", &p[i].y);
    }

    distance = sqrt((p[1].x - p[0].x) * (p[1].x - p[0].x) + (p[1].y - p[0].y) * (p[1].y - p[0].y));

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n", p[0].x, p[0].y, p[1].x, p[1].y, distance);
}