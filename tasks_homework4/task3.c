#include <stdio.h>
#include <string.h>

int main (){
    char board[] = "Гагарин;Титов;Армстронг;Коллинз;Олдрин";

    printf("Список экипажа: \n");
    char *token = strtok(board, ";");
    while (token){
        printf("%s\n", token);
        token = strtok(NULL, ";");
    }
    return 0;
}