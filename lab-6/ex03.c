#include <math.h>
#include <stdio.h>

struct Point {
    float x;
    float y;
};

float getDistance(struct Point point1, struct Point point2) {
    return sqrt((point1.x - point2.x) * (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y));
}

int main(int argc, char *argv[]) {
    struct Point point1;
    struct Point point2;

    printf("x1: ");
    scanf("%f", &point1.x);
    getchar();

    printf("y1: ");
    scanf("%f", &point1.y);
    getchar();

    printf("x2: ");
    scanf("%f", &point2.x);
    getchar();

    printf("y2: ");
    scanf("%f", &point2.y);
    getchar();

    float distance = getDistance(point1, point2);
    printf(
        "Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
        point1.x,
        point1.y,
        point2.x,
        point2.y,
        distance
    );

    return 0;
}
