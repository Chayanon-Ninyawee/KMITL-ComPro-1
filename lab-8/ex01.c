#include <math.h>
#include <stdio.h>

float calCircleCircumference(float radius) {
    return 2.0f * M_PI * radius;
}

float calCircleArea(float radius) {
    return M_PI * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius in cm: ");
    scanf("%f", &radius);

    printf("Circumference: %.2f\n", calCircleCircumference(radius));
    printf("Area: %.2f\n", calCircleArea(radius));
    return 0;
}
