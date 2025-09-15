#include <limits.h>
#include <stdio.h>
#define NUMBER_OF_STUDENTS 5

int main(int argc, char *argv[]) {
    int studentMarks[NUMBER_OF_STUDENTS];

    for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &studentMarks[i]);
    }

    int totalMark = 0;
    int highestMark = -INT_MAX;
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
        totalMark += studentMarks[i];

        if (highestMark < studentMarks[i]) {
            highestMark = studentMarks[i];
        }
    }

    printf("Total Marks : %d\n", totalMark);
    printf("Highest Marks: %d\n", highestMark);

    return 0;
}
