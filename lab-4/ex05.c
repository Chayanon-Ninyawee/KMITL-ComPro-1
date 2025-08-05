#include <stdio.h>
int main(int argc, char *argv[]) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("The number must be positive\n");
        return 1;
    }

    int factorial = 1;
    for (int i = 2; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}
