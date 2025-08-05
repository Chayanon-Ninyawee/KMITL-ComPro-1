#include <stdio.h>
int main(int argc, char *argv[]) {
    int multiplier;

    printf("Enter the number: ");
    scanf("%d", &multiplier);

    printf("\nMultiplication Table for %d:\n", multiplier);
    for (int i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", multiplier, i, multiplier * i);
    }

    return 0;
}
