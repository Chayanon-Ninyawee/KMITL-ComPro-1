#include <stdio.h>

#define NUMBER_OF_INTEGER 5

int main() {
    int nums[NUMBER_OF_INTEGER];

    printf("Enter %d integers: ", NUMBER_OF_INTEGER);
    for (int i = 0; i < NUMBER_OF_INTEGER; i++) {
        scanf("%d", (nums + i));
    }

    char isSorted = 0;
    int j = 0;
    while (!isSorted) {
        isSorted = 1;
        for (int i = 0; i < NUMBER_OF_INTEGER - 1 - j; i++) {
            if (*(nums + i) > *(nums + i + 1)) {
                int tmp = *(nums + i);
                *(nums + i) = *(nums + i + 1);
                *(nums + i + 1) = tmp;
                isSorted = 0;
            }
        }
        j++;
    }

    printf("Sorted: ");
    for (int i = 0; i < NUMBER_OF_INTEGER; i++) {
        printf("%d ", *(nums + i));
    }
    printf("\n");

    return 0;
}
