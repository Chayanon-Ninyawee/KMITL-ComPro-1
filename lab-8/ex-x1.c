#include <math.h>
#include <stdio.h>

float calTriangleArea(float sideA, float sideB, float sideC) {
    float s = (sideA + sideB + sideC) / 2.0f;

    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

int main() {
    float sideA, sideB, sideC;
    printf("Input triangle sides (a, b, c): ");
    scanf("%f %f %f", &sideA, &sideB, &sideC);

    printf("%.2f\n", calTriangleArea(sideA, sideB, sideC));

    return 0;
}
