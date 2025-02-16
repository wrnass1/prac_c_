#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int day;
    int month;
    int year;
    char description[100];
} Event;

int main() {
    int n;
    scanf("%d", &n);
    Event *events = (Event *)malloc(n * sizeof(Event));

    for (int i = 0; i < n; i++) {
        printf("Enter name, date and description for event %d: ", i + 1);
        scanf("%s %d %d %d %s", events[i].name, &events[i].day, &events[i].month, &events[i].year, events[i].description);
    }

    for (int i = 0; i < n; i++) {
        printf("Event: %s\nDate: %d/%d/%d\nDescription: %s\n\n", events[i].name, events[i].day, events[i].month, events[i].year, events[i].description);
    }

    return 0;
}