// example of typedef

#include <stdio.h>
#include <conio.h>

typedef struct student
{
    char name[50];
    int age;
} stud;

int main()
{
    stud s1;
    printf("Enter the details of student s1:\n");
    printf("Enter the name of the student\n");
    scanf("%s", &s1.name);
    printf("Enter the age of the student\n");
    scanf("%d", &s1.age);
    printf("Printing the student details\n");
    printf("Name: %s\n", s1.name);
    printf("Age of the student: %d\n", s1.age);

    return 0;
}