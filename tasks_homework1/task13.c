#include <stdio.h>

int main() {
    int N;

    printf("Введите количество космонавтов: ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("Можно доставить без остатка.\n");
    } else {
        printf("Нельзя доставить без остатка.\n");
    }

    return 0;
}
