#include <stdio.h>

int main() {
    float frequency;

    printf("Введите частоту сигнала в ГГц: ");
    scanf("%f", &frequency);

    if (frequency >= 2.5 && frequency <= 3.5) {
        printf("Связь стабильна.\n", frequency);
    } else {
        printf("Связь не стабильна.\n", frequency);
    }

    return 0;
}