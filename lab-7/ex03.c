#include <stdio.h>

int main() {
    int array[] = {3, 1, 2, 4, 5, 6};

    int highestElementIndex = 0;
    for (int i = 1; i < 6; i++) {
        int *element = (array + i);

        int *highestElement = (array + highestElementIndex);
        if (*element > *highestElement) {
            highestElementIndex = i;
        }
    }

    printf("Max value: %d\n", *(array + highestElementIndex));
}
