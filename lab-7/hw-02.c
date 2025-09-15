#include <stdio.h>

int main() {
    float x = 123.123f;
    float y = 13.231f;

    printf("Before reverse: x = %.2f, y = %.2f\n", x, y);

    float *xPtr = &x;
    float *yPtr = &y;

    float *temp;

    *temp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = *temp;

    printf("After reverse: x = %.2f, y = %.2f\n", x, y);
}
