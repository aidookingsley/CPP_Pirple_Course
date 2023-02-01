#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Ade");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 25;
    student2.gpa = 3.7;
    strcpy(student2.name, "Adekyensroma");
    strcpy(student2.major, "Medicine");
    printf("%f\n", student2.gpa);
    printf("%s", student2.name);

    return 0;
}