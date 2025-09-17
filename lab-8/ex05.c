#include <stdio.h>
#include <stdlib.h>

int getSumOfOdd(int *nums, int size) {
    int sumOfOdd = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 == 1) sumOfOdd += nums[i];
    }

    return sumOfOdd;
}

int getSumOfEven(int *nums, int size) {
    int sumOfEven = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 == 0) sumOfEven += nums[i];
    }

    return sumOfEven;
}

int main() {
    int size;
    printf("N: ");
    scanf("%d", &size);

    int nums[size];

    for (int i = 0; i < size; i++) {
        printf("Input: ");
        scanf("%d", &nums[i]);
    }

    printf(
        "Output: Sum of even number: %d\n        Sum of odd number: %d\n",
        getSumOfEven(nums, size),
        getSumOfOdd(nums, size)
    );

    return EXIT_SUCCESS;
}
