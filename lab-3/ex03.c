// Enter a number: 2
// 2 is even$
// 505 is out of range$

#include <stdio.h>
int main(int argc, char *argv[]) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num < 1) {
    case 1:
        printf("%d is out of range\n", num);
        return 0;
    }

    switch (num > 100) {
    case 1:
        printf("%d is out of range\n", num);
        return 0;
    }

    switch (num % 2) {
    case 0:
        printf("%d is even\n", num);
        break;
    case 1:
        printf("%d is odd\n", num);
        break;
    }

    return 0;
}
