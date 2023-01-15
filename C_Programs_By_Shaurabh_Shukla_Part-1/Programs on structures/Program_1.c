// Write a program that define a structure student, with members rollno, name and age. Also define functions to input and show student data.

#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[20];
    int age;
};

struct student inputstudentData();
void showstudentData(struct student s);

int main()
{
    struct student s1;
    s1 = inputstudentData();
    showstudentData(s1);
    return 0;
}

struct student inputstudentData()
{
    struct student s;
    printf("Enter your roll no\n");
    scanf("%d", &s.rollno);
    printf("Enter your age\n");
    scanf("%d", &s.age);
    printf("Enter your name\n");
    fflush(stdin);
    gets(s.name);
    return s;
}

void showstudentData(struct student s)
{
    printf("Student Data\n");
    printf("Roll no is: %d\n", s.rollno);
    printf("Age is : %d\n", s.age);
    printf("Name is : %s\n", s.name);
}