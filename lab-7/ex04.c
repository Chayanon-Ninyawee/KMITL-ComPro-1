#include <stdio.h>

int main() {
    int size = 6;
    int array[] = {3, 1, 2, 4, 5, 6};

    for (int i = 0; i < size; i++) {
        int *element = (array + i);

        printf("%d\n", *element);
    }
}
