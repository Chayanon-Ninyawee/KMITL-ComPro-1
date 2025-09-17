#include <stdio.h>
#include <stdlib.h>

int sumOfTwoInteger(int a, int b) {
    return a * a + b * b;
}

int main() {
    int a, b;
    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum of squares of %d and %d is %d\n", a, b, sumOfTwoInteger(a, b));

    return EXIT_SUCCESS;
}
