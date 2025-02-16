#include <stdio.h>

int main() {
    int m;
    float moon_weight;

    printf("Введите массу объекта в кг: ");
    scanf("%d", &m);

    moon_weight = m * (1.0f / 6.0f);

    printf("Вес объекта на Луне: %.2f Н\n", moon_weight);

    return 0;
}
