#include <stdio.h>

#define LENGTH 9

int main(int argc, char *argv[]) {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Reversed Array: ");
    for (int i = LENGTH - 1; i >= 0; i--) {
        printf("%d ", original[i]);
    }
    printf("\n");

    return 0;
}
