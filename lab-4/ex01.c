// 1.Enter the number: 3
// 2.Enter the number: 4
// 3.Enter the number: 5
// 	...
// 9.Enter the number: 9
// 10.Enter the number: 7
//
// total sum is 112
// Average is 8.76

#include <stdio.h>
int main(int argc, char *argv[]) {
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("%d.Enter the number: ", i + 1);

        int num;
        scanf("%d", &num);

        sum += num;
    }

    float average = sum / 10.0f;

    printf("\ntotal sum is %d\n", sum);
    printf("Average is %.2f\n", average);

    return 0;
}
