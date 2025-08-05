#include <stdio.h>

#define LENGTH 10

int main(int argc, char *argv[]) {
    int intergers[10];

    for (int i = 0; i < LENGTH; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &intergers[i]);
    }

    int numberOfEven = 0;
    for (int i = 0; i < LENGTH; i++) {
        if (intergers[i] % 2 == 0) {
            numberOfEven++;
        }
    }

    printf("Even numbers: %d\n", numberOfEven);
    printf("Odd numbers: %d\n", LENGTH - numberOfEven);

    return 0;
}
