#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float gpa;
};

int main(){
    int num_of_students;
    printf("enter number of students:");
    scanf("%d",&num_of_students);
    struct Student *list_students = (struct Student*)malloc(num_of_students * sizeof(struct Student));

    for(int i = 0; i < num_of_students; i++){
        printf("enter data for student");
        struct Student student;
        scanf("%s","%d","%f",list_students[i].name, &list_students[i].age, &list_students[i].gpa);
    }
    for (int i = 0; i < num_of_students; i++){
        printf("Name: %s, Age: %d, GPA: %f\n", list_students[i].name, list_students[i].age, list_students[i].gpa);
    }


    return 0;
}

