#include <stdio.h>

int main() {
    int temperature;

    printf("Введите температуру в °C: ");
    scanf("%d", &temperature);

    if (temperature >= -150 && temperature <= 120) {
        printf("Температура %d°C находится в допустимом диапазоне.\n", temperature);
    } else {
        printf("Температура %d°C находится вне допустимого диапазона.\n", temperature);
    }

    return 0;
}
