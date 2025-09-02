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

    for (int i = 0; i < STUDENT_INFOS_SIZE; i++) {
        struct StudentInfo *studentInfo = &studentInfos[i];

        printf(
            "Student %d name is \"%s\", age %d, score %.1f.\n",
            i + 1,
            studentInfo->name,
            studentInfo->age,
            studentInfo->score
        );
    }
    return 0;
}
