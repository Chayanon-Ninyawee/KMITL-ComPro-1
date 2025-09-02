#include <stdio.h>
#define STUDENT_INFOS_SIZE 3

struct Score {
    float math;
    float english;
    float science;
    float history;
};

float averageScore(struct Score s) {
    return (s.math + s.english + s.science + s.history) / 4.0f;
}

struct StudentInfo {
    char name[100];
    int id;
    struct Score score;
};

int main() {
    struct StudentInfo studentInfos[STUDENT_INFOS_SIZE];

    for (int i = 0; i < STUDENT_INFOS_SIZE; i++) {
        struct StudentInfo *studentInfo = &studentInfos[i];

        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf(
            "%s %d %f %f %f %f",
            studentInfo->name,
            &studentInfo->id,
            &studentInfo->score.math,
            &studentInfo->score.english,
            &studentInfo->score.science,
            &studentInfo->score.history
        );
        printf("\n");
    }

    printf("Student Averages:\n");
    for (int i = 0; i < STUDENT_INFOS_SIZE; i++) {
        struct StudentInfo *studentInfo = &studentInfos[i];

        printf("%s (ID: %d): %.2f\n", studentInfo->name, studentInfo->id, averageScore(studentInfo->score));
    }

    int highestScoreIndex = 0;
    for (int i = 1; i < STUDENT_INFOS_SIZE; i++) {
        struct StudentInfo *studentInfo = &studentInfos[i];

        float highestScore = averageScore(studentInfos[highestScoreIndex].score);
        if (averageScore(studentInfo->score) > highestScore) {
            highestScoreIndex = i;
        }
    }

    printf(
        "\nTop Student: %s with %.2f\n",
        studentInfos[highestScoreIndex].name,
        averageScore(studentInfos[highestScoreIndex].score)
    );

    float mathScoreSum = 0.0f;
    float englishScoreSum = 0.0f;
    float scienceScoresum = 0.0f;
    float historyScoreSum = 0.0f;

    for (int i = 0; i < STUDENT_INFOS_SIZE; i++) {
        struct StudentInfo *studentInfo = &studentInfos[i];

        mathScoreSum += studentInfo->score.math;
        englishScoreSum += studentInfo->score.english;
        scienceScoresum += studentInfo->score.science;
        historyScoreSum += studentInfo->score.history;
    }

    float averageMathScore = mathScoreSum / STUDENT_INFOS_SIZE;
    float averageEnglishScore = englishScoreSum / STUDENT_INFOS_SIZE;
    float averageScienceScore = scienceScoresum / STUDENT_INFOS_SIZE;
    float averageHistoryScore = historyScoreSum / STUDENT_INFOS_SIZE;

    printf("\nSubject Averages:\n");
    printf("Math: %.2f\n", averageMathScore);
    printf("English: %.2f\n", averageEnglishScore);
    printf("Science: %.2f\n", averageScienceScore);
    printf("History: %.2f\n", averageHistoryScore);

    float subjectsScores[] = {averageMathScore, averageEnglishScore, averageScienceScore, averageHistoryScore};
    const char *subjectNames[] = {"Math", "English", "Science", "History"};

    int highestSubjectScoreIndex = 0;
    for (int i = 1; i < 4; i++) {
        if (subjectsScores[i] > subjectsScores[highestSubjectScoreIndex]) {
            highestSubjectScoreIndex = i;
        }
    }

    printf(
        "\nTop Subject: %s with average %.2f\n",
        subjectNames[highestSubjectScoreIndex],
        subjectsScores[highestSubjectScoreIndex]
    );

    return 0;
}
