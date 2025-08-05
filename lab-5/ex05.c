#include <limits.h>
#include <stdio.h>

#define LENGTH 8

int main(int argc, char *argv[]) {
    int intergers[LENGTH];

    for (int i = 0; i < LENGTH; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &intergers[i]);
    }

    int smallestInterger = INT_MAX;
    int largestInterger = -INT_MAX;
    for (int i = 0; i < LENGTH; i++) {
        if (smallestInterger > intergers[i]) {
            smallestInterger = intergers[i];
        }
        if (largestInterger < intergers[i]) {
            largestInterger = intergers[i];
        }
    }

    printf("Smallest numbers: %d\n", smallestInterger);
    printf("Largest numbers: %d\n", largestInterger);

    return 0;
}
