// Enter a number: 2
// Enter a number: 4
// Does not match. Try again$

#include <stdio.h>
int main(int argc, char *argv[]) {
    int num1, num2;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter a number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Match\n");
    } else {
        printf("Does not match. Try again\n");
    }
}
