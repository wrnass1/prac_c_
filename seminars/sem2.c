#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p = {"Alice", 30, 1.75};
    printf("%d", sizeof(p));
    return 0;
}