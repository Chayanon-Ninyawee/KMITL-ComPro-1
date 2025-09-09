#include <stdio.h>
int main() {
    int a = 0;
    int b = 5;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    int *aPtr = &a;
    int *bPtr = &b;

    *aPtr = *aPtr ^ *bPtr;
    *bPtr = *aPtr ^ *bPtr;
    *aPtr = *aPtr ^ *bPtr;

    printf("After reverse: a = %d, b = %d\n", a, b);
}
