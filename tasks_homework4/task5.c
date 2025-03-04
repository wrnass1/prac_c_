#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[200];

    printf("Введите текст отчета: ");
    scanf(" %[^\n]", str);  

    char *copy = strdup(str);

    printf("Оригинал: %s\n", str);
    printf("Копия: %s\n", copy);

    free(copy);
    return 0;
}
