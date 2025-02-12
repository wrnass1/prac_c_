#include <stdio.h>

int main(){
    int avalible_destination = 500;
    int destination;
    printf("Enter the destination: ");
    scanf("%d", &destination);
    if (destination >= avalible_destination){
        printf("You can't get here");
    }else{
        printf("Let's go");
    }
}