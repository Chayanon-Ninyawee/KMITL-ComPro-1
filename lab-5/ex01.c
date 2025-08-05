#include <stdio.h>

#define LENGTH 10

int main(int argc, char *argv[]) {
    int intergers[10];

    for (int i = 0; i < LENGTH; i++) {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &intergers[i]);
    }

    printf("Values in array are: ");
    for (int i = 0; i < LENGTH - 1; i++) {
        printf("%d, ", intergers[i]);
    }
    printf("%d\n", intergers[LENGTH - 1]);

    return 0;
}
