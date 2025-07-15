// Enter your full name: Poom Konghuyrob
// Enter your age: 19
// Enter your heght: 160.5
// Enter you University name: KMITL
//
// Hi! Everyone. This is K.Poom from KMITL. I am 19 years old and my height is
// 160.5 cm tall.

#include <stdio.h>
int main(int argc, char *argv[]) {
    char name[64];
    int age;
    float height;
    char uniName[64];

    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter you University name: ");
    getchar();  // Clear leftover newline
    scanf("%[^\n]", uniName);

    printf("Hi! Everyone. This is K.%s from %s. I am %d years old and my height is\n", name, uniName, age);
    printf("%.1f cm tall.\n", height);
}
