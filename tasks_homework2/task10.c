#include <stdio.h>

typedef struct {
    char name[20];
    int credits;
    char professor[20];
} Course;

int main() {
    int n;
    scanf("%d", &n);
    Course *courses = (Course *)malloc(n * sizeof(Course));

    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].professor);
    }

    for (int i = 0; i < n; i++) {
        printf("Course: %s\nCredits: %d\nProfessor: %s\n\n", courses[i].name, courses[i].credits, courses[i].professor);
    }

    return 0;
}