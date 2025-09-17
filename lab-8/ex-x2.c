#include <stdio.h>
#define USD_TO_THB 31.25;

float D2B(float usd) {
    return usd * USD_TO_THB;
}

int main() {
    float usd;

    printf("Type USD ($): ");
    scanf("%f", &usd);

    printf("%.2f\n", D2B(usd));

    return 0;
}
