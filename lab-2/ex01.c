// Please enter an integer value: 12
// You entered 12
// Please enter a float value: 87.32
// You entered 87.32
// Please enter a character: n
// You entered n

#include <stdio.h>
int main(int argc, char *argv[]) {
    int myInteger;
    float myFloat;
    char myChar;

    printf("Please enter an integer value: ");
    scanf("%d", &myInteger);
    printf("You entered %d\n", myInteger);

    printf("Please enter a float value: ");
    scanf("%f", &myFloat);
    printf("You entered %.2f\n", myFloat);

    printf("Please enter a character: ");
    scanf(" %c", &myChar);
    printf("You entered %c\n", myChar);
}
