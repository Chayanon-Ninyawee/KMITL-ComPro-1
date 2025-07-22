#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
    float radius;
    float length;
    float resistivity;

    printf("Enter Radius of Resistor (m) : ");
    scanf("%f", &radius);
    printf("Enter Length of Resistor (m) : ");
    scanf("%f", &length);
    printf("Enter Resistivity of Resistor : ");
    scanf("%f", &resistivity);

    float resistance = (resistivity * length) / (M_PI * radius * radius);
    printf("The value of this resistor = %.2f OHM\n", resistance);
    printf("-------------------------------------\n");
}
