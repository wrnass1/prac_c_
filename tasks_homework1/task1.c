#include <stdio.h>

int main(){
    int weight;

    printf("Ввeдите ваш вес: ");
    scanf("%d", &weight);
    if (weight < 60 || weight > 90){
        printf("You are underweight");
    } else{
        printf("Your weight is okay");
    }
}