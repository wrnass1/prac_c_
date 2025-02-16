#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int age;
    float gpa;
} Student;

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    Student *students = (Student *)malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", students[i].name, students[i].age, students[i].gpa);
    }

    return 0;
}