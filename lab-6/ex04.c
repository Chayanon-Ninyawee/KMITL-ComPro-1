#include <stdio.h>

struct Vector {
    float i;
    float j;
};

int main(int argc, char *argv[]) {
    struct Vector vector1;
    struct Vector vector2;

    printf("u_x: ");
    scanf("%f", &vector1.i);
    getchar();

    printf("u_y: ");
    scanf("%f", &vector1.j);
    getchar();

    printf("v_x: ");
    scanf("%f", &vector2.i);
    getchar();

    printf("v_y: ");
    scanf("%f", &vector2.j);
    getchar();

    printf("Resultant vector is equvalence to %.1fi + %.1fj\n", vector1.i + vector2.i, vector1.j + vector2.j);

    return 0;
}
