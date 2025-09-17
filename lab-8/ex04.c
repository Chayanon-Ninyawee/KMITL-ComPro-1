#include <stdio.h>
#include <stdlib.h>

const char VOWELS[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
const int VOWELS_SIZE = 10;

int getNumberOfVowels(char *str) {
    int numberOfVowels = 0;

    int i = 0;
    while (1) {
        if (str[i] == '\0') break;

        for (int j = 0; j < VOWELS_SIZE; j++) {
            if (str[i] == VOWELS[j]) numberOfVowels++;
        }

        i++;
    }

    return numberOfVowels;
}

int main() {
    char str[100];
    printf("Input: ");
    scanf("%[^\n]", str);

    printf("Output: Number of vowels: %d\n", getNumberOfVowels(str));

    return EXIT_SUCCESS;
}
