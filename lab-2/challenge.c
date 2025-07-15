// Enter integer #1: 4$
// Enter integer #2: -1$
// Enter integer #3: 10$
// $
// Results:$
// Minimum: -1$
// Maximum: 10$
// Sum: 13$
// Average: 4.33$

#include <stdio.h>
int main() {
    int one;
    int two;
    int three;

    printf("Enter integer #1: ");
    scanf("%d", &one);
    printf("Enter integer #2: ");
    scanf("%d", &two);
    printf("Enter integer #3: ");
    scanf("%d", &three);

    int min, max;

    if (one <= two && one <= three) {
        min = one;
    } else if (two <= one && two <= three) {
        min = two;
    } else {
        min = three;
    }

    if (one >= two && one >= three) {
        max = one;
    } else if (two >= one && two >= three) {
        max = two;
    } else {
        max = three;
    }

    int sum = one + two + three;
    float average = sum / 3.0f;

    printf("\nResults:\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
}
