#include <stdio.h>

int main() {
    double T; 
    int minutes; 
    double seconds; 

    
    printf("Введите время в секундах: ");
    scanf("%lf", &T);

    minutes = (int)(T / 60); 
    seconds = T - (minutes * 60); 

    printf("%lf секунд → %d минута(ы) %.2lf секунд\n", T, minutes, seconds);

    return 0;
}
