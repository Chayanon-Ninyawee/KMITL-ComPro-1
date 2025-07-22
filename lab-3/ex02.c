// Enter a number: 2
// 2 is even$
// 505 is out of range$

#include <stdio.h>
int main(int argc, char *argv[]) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 1 || num > 100) {
        printf("%d is out of range\n", num);
        return 0;
    }

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
