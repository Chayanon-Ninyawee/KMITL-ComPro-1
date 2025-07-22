// Enter cone hight: 10
// Enter cone base radius: 5
// Cone volume = 261.8
// $
// This cone is perfect for Supun project$
//
// Enter cone hight: 5
// Enter cone base radius: 2
// Cone volume = 20.9
// $
// This cone is not fit for this project$

#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
    float height, radius;

    printf("Enter cone height: ");
    scanf("%f", &height);

    printf("Enter cone base radius: ");
    scanf("%f", &radius);

    float volume = (1 / 3.0f) * M_PI * radius * radius * height;

    printf("Cone volume = %.1f.\n", volume);

    printf("\n");

    if (volume > 260) {
        printf("This cone is perfect for Supun project\n");
    } else {
        printf("This cone is not fit for this project\n");
    }
}
