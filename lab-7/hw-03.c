#include <stdio.h>
struct MyStruct {
    int a;
    int b;
    int c;
};

int main() {
    struct MyStruct myStruct;
    myStruct.a = 2;
    myStruct.b = 4;

    int sum = myStruct.a + myStruct.b;
    int *sumPtr = &sum;

    myStruct.c = *sumPtr;

    printf("myStruct.a: %d\n", myStruct.a);
    printf("myStruct.b: %d\n", myStruct.b);
    printf("myStruct.c: %d\n", myStruct.c);
}
