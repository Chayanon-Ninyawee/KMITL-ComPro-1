#include <stdio.h>

int main(int argc, char *argv[]) {
    int sum = 0;

    int i = 0;
    while (i < 10) {
        printf("%d.Enter the number: ", ++i);

        int num;
        scanf("%d", &num);

        sum += num;
    }

    printf("\nTotal sum is %d\n", sum);

    return 0;
}
