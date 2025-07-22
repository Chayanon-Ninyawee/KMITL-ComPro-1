// Enter your name: Kha
// Enter your Calculus score: 70
// Enter your Physic score: 85
// Enter your Science score: 60
// Kha, your average is 71.67. You got grade B.$

#include <stdio.h>
int main(int argc, char *argv[]) {
    char name[64];
    float calculusScore, physicScore, scienceScore;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your Calculus score: ");
    scanf("%f", &calculusScore);

    printf("Enter your Physic score: ");
    scanf("%f", &physicScore);

    printf("Enter your Science score: ");
    scanf("%f", &scienceScore);

    float averageScore = (calculusScore + physicScore + scienceScore) / 3;

    char grade;
    if (averageScore >= 80) {
        grade = 'A';
    } else if (averageScore >= 70) {
        grade = 'B';
    } else if (averageScore >= 60) {
        grade = 'C';
    } else if (averageScore >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.\n", name, averageScore, grade);
}
