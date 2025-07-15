#include <stdio.h>
int main(int argc, char *argv[]) {
    char str[] = "ILOVEPHOOM";

    // First -1 since array index start from 0
    // Second -1 since there is a \0 in the end
    for (int i = sizeof(str) - 1 - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
}
