#include <stdio.h>
#include <stdlib.h>

char isPrime(int number) {
    if (number != 2 && number % 2 == 0) return 0;
    for (int i = 3; i < number; i += 2) {
        if (number % i == 0) return 0;
    }

    return 1;
}

int main() {
    int start, end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    printf("\nThe prime numbers within the intervals are:\n");
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) printf("%d ", i);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
