#include <stdio.h>
#define STUDENT_INFOS_SIZE 3

struct StudentInfo {
    char name[100];
    int age;
    float score;
};

int main(int argc, char *argv[]) {
    struct StudentInfo studentInfos[STUDENT_INFOS_SIZE];

    for (int i = 0; i < STUDENT_INFOS_SIZE; i++) {
        struct StudentInfo *studentInfo = &studentInfos[i];

        printf("Student %d's name: ", i + 1);
        scanf("%[^\n]", studentInfo->name);
        getchar();

        printf("Student %d's age: ", i + 1);
        scanf("%d", &studentInfo->age);
        getchar();

        printf("Student %d's score: ", i + 1);
        scanf("%f", &studentInfo->score);
        getchar();
    }

    int highestScoreIndex = 0;
    for (int i = 1; i < STUDENT_INFOS_SIZE; i++) {
        struct StudentInfo *studentInfo = &studentInfos[i];

        float highestScore = studentInfos[highestScoreIndex].score;
        if (studentInfo->score > highestScore) {
            highestScoreIndex = i;
        }
    }

    printf(
        "The highest scores belongs to %s at %.1f scores!\n",
        studentInfos[highestScoreIndex].name,
        studentInfos[highestScoreIndex].score
    );

    return 0;
}
