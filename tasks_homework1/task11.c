#include <stdio.h>

int main() {
    float oxygenLevel;

    printf("Введите уровень кислорода в %%: ");
    scanf("%f", &oxygenLevel);

    if (oxygenLevel < 15.0) {
        printf("Уровень кислорода %.2f%% ниже 15%%. Включаю аварийную систему.\n", oxygenLevel);
    } else {
        printf("Уровень кислорода %.2f%% в норме. Нет необходимости включать аварийную систему.\n", oxygenLevel);
    }

    return 0;
}
