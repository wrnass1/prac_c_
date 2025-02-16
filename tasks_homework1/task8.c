#include <stdio.h>

int main() {
    int N;

    printf("Введите вес груза: ");
    scanf("%d", &N);

    if (N % 4 == 0) 
    {
        int section_weight = N / 4;
        printf("Груз можно распределить.\n");
        printf("В отсеке будет %d кг.\n", section_weight);
    } else 
    {
        printf("Груз нельзя равномерно распределить.\n");
    }

    return 0;
}