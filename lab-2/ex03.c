// Enter your Name: John
// Enter your Age: 19
// Enter your height: 190.8
// Enter your weight: 100
// Enter your gender: M
// Enter your Education Qualification: University
//
// Name: John       Age: 19       Gender: M
// Height: 190.8    Weight: 100
// Education: University

#include <stdio.h>
int main(int argc, char *argv[]) {
    char name[64];
    int age;
    float height;
    int weight;
    char gender;
    char eduQuali[64];

    printf("Enter your Name: ");
    scanf("%[^\n]", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%d", &weight);
    printf("Enter your gender: ");
    scanf(" %c", &gender);
    printf("Enter your Education Qualification: ");
    getchar();  // Clear leftover newline
    scanf("%[^\n]", eduQuali);

    printf("\nName: %-10s Age: %-10d Gender: %c\n", name, age, gender);
    printf("Height: %-7.1f Weight: %-7d\n", height, weight);
    printf("Education: %s\n", eduQuali);
}
