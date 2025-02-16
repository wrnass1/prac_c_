#include <stdio.h>
#include <stdlib.h>

typedef union {
    int i;
    float f;
    char str[20];
} Data;

int main() {
    int choice;
    scanf("%d", &choice);
    Data data;

    if (choice == 1) {
        scanf("%d", &data.i);
        printf("Integer: %d\n", data.i);
    } else if (choice == 2) {
        scanf("%f", &data.f);
        printf("Float: %.2f\n", data.f);
    } else if (choice == 3) {
        scanf("%s", data.str);
        printf("String: %s\n", data.str);
    }

    return 0;
}