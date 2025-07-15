// Enter your Name: M
// Enter your student ID: 6300000
// Enter your Programming score: 4
// Enter your Physics score: 3.0
// Enter your Calculus score: 2.5
// Hi M(6300000)! Your GPA is 3.17

#include <stdio.h>
int main(int argc, char *argv[]) {
    char name[64];
    int id;
    float programmingScore;
    float physicsScore;
    float calculusScore;

    printf("Enter your Name: ");
    scanf("%[^\n]", name);
    printf("Enter your student ID: ");
    scanf("%d", &id);
    printf("Enter your Programming score: ");
    scanf("%f", &programmingScore);
    printf("Enter your Physics score: ");
    scanf("%f", &physicsScore);
    printf("Enter your Calculus score: ");
    scanf("%f", &calculusScore);

    float gpa = (programmingScore + physicsScore + calculusScore) / 3;

    printf("Hi %s(%d)! Your GPA is %.2f\n", name, id, gpa);
}
