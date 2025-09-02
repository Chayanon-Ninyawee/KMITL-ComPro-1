#include <stdio.h>
#define TIMES_SIZE 3

struct Time {
    int minutes;
    int seconds;
};

int main(int argc, char *argv[]) {
    struct Time times[TIMES_SIZE];

    for (int i = 0; i < TIMES_SIZE; i++) {
        struct Time *time = &times[i];

        printf("Time input (m:s): ");
        scanf("%d:%d", &time->minutes, &time->seconds);
        getchar();
    }

    int elaspedSec = 0;

    for (int i = 0; i < TIMES_SIZE; i++) {
        struct Time *time = &times[i];

        elaspedSec += time->minutes * 60 + time->seconds;
    }

    printf("Total time elasped: %d second(s)\n", elaspedSec);

    return 0;
}
