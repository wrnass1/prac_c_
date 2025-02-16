#include <stdio.h>

int main() {
    int angle;

    printf("Введите угол в °: ");
    scanf("%d", &angle);

    if (angle >= -180 && angle <= 180) {
        printf("Угол %d° находится в допустимом диапазоне.\n", angle);
    } else {
        printf("Угол %d° выходит за допустимый диапазон.\n", angle);
    }

    return 0;
}