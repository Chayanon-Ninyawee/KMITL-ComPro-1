#include <stdio.h>

float getAverageGrade(float *studentScores, int numOfStudents) {
    float scoreSum = 0;
    for (int i = 0; i < numOfStudents; i++) {
        scoreSum += studentScores[i];
    }

    return scoreSum / numOfStudents;
}

int getHighestGradeIndex(float *studentScores, int numOfStudents) {
    int highestGradeIndex = 0;
    for (int i = 1; i < numOfStudents; i++) {
        if (studentScores[highestGradeIndex] < studentScores[i]) {
            highestGradeIndex = i;
        }
    }

    return highestGradeIndex;
}

int getLowestGradeIndex(float *studentScores, int numOfStudents) {
    int lowestGradeIndex = 0;
    for (int i = 1; i < numOfStudents; i++) {
        if (studentScores[lowestGradeIndex] > studentScores[i]) {
            lowestGradeIndex = i;
        }
    }

    return lowestGradeIndex;
}

void printWhoPass(char studentNames[][64], float *studentScores, int numOfStudents) {
    for (int i = 0; i < numOfStudents; i++) {
        if (studentScores[i] >= 60.0f) {
            printf("%s\n", studentNames[i]);
        }
    }
}

int main() {
    int numOfStudents;
    printf("Enter number of students: ");
    scanf("%d", &numOfStudents);

    printf("\n");

    char studentNames[numOfStudents][64];
    float studentScores[numOfStudents];

    for (int i = 0; i < numOfStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", studentNames[i]);

        printf("Enter grade of %s: ", studentNames[i]);
        scanf("%f", &studentScores[i]);

        printf("\n");
    }

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", getAverageGrade(studentScores, numOfStudents));
    printf("Highest grade: %.0f\n", studentScores[getHighestGradeIndex(studentScores, numOfStudents)]);
    printf("Lowest grade: %.0f\n", studentScores[getLowestGradeIndex(studentScores, numOfStudents)]);

    printf("\nStudents who passed:\n");
    printWhoPass(studentNames, studentScores, numOfStudents);

    printf("\n");
}
