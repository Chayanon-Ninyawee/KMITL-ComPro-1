// Enter number of subjects (max 10): 3
// $
// Enter subject 1: Cal
// Enter Math score: 85
// $
// Enter subject 2: Physic
// Enter Physics score: 73
// $
// Enter subject 3: compro
// Enter English score: 92
// $
// Subject     Score     Grade     Grade$
// --------------------------------------$
// Cal         85        B         3.0$
// Physics     73        C         2.0$
// compro      92        A         4.0$
// $
// GPA: 3.0$

#include <stdio.h>

char scoreToGrade(float score) {
    char grade;
    if (score >= 80) {
        grade = 'A';
    } else if (score >= 70) {
        grade = 'B';
    } else if (score >= 60) {
        grade = 'C';
    } else if (score >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    return grade;
}

float scoreToNumericalGrade(float score) {
    float grade;
    if (score >= 80) {
        grade = 4.0;
    } else if (score >= 70) {
        grade = 3.0;
    } else if (score >= 60) {
        grade = 2.0;
    } else if (score >= 50) {
        grade = 1.0;
    } else {
        grade = 0.0;
    }

    return grade;
}

int main() {
    int numOfSubject;
    printf("Enter number of subjects (max 10): ");
    scanf("%d", &numOfSubject);

    if (numOfSubject < 1 || numOfSubject > 10) {
        printf("The number of subjects is out of range.\n");
        return 0;
    }

    printf("\n");

    char subjectNames[numOfSubject][64];
    float subjectScores[numOfSubject];

    for (int i = 0; i < numOfSubject; i++) {
        printf("Enter subject %d: ", i + 1);
        scanf(" %[^\n]", subjectNames[i]);

        printf("Enter %s score: ", subjectNames[i]);
        scanf("%f", &subjectScores[i]);

        printf("\n");
    }

    float scoreSum = 0;

    printf("%-12s %-10s %-10s %-10s\n", "Subject", "Score", "Grade", "Grade");
    printf("---------------------------------------------\n");
    for (int i = 0; i < numOfSubject; i++) {
        scoreSum += subjectScores[i];

        printf(
            "%-12s %-10.0f %-10c %-10.1f\n",
            subjectNames[i],
            subjectScores[i],
            scoreToGrade(subjectScores[i]),
            scoreToNumericalGrade(subjectScores[i])
        );
    }

    float averageScore = scoreSum / numOfSubject;

    printf("\n");

    printf("GPA: %.1f\n", scoreToNumericalGrade(averageScore));
}
