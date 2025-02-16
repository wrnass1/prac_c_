#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char position[20];
    float salary;
} Employee;

int main() {
    int n;
    scanf("%d", &n);
    Employee *employees = (Employee *)malloc(n * sizeof(Employee));

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", employees[i].name, employees[i].position, &employees[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\nPosition: %s\nSalary: %.2f\n\n", employees[i].name, employees[i].position, employees[i].salary);
    }

    return 0;
}