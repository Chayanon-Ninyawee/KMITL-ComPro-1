#include <stdio.h>

int main() {
    int numOfElements;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElements);

    int integers[numOfElements];

    for (int i = 0; i < numOfElements; i++) {
        printf("Enter %d intergers: ", i + 1);
        scanf("%d", &integers[i]);
    }

    printf("\nOutput:\n");
    for (int i = 0; i < numOfElements; i++) {
        int count = 1;
        int alreadyCounted = 0;
        for (int j = 0; j < i; j++) {
            if (integers[j] == integers[i]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (alreadyCounted) continue;

        for (int j = i + 1; j < numOfElements; j++) {
            if (integers[j] == integers[i]) {
                count++;
            }
        }
        printf("%d appears %d time(s)\n", integers[i], count);
    }

    return 0;
}
