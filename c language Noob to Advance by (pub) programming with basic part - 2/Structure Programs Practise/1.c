//Store Student Information Like (Name, Roll & Marks) in C
#include<stdio.h>
#include<conio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};


int main()
{
    struct student s;

    printf("Enter the information of Students\n");

    printf("Enter Name: \n");
    scanf("%s", &s.name);

    printf("Enter Roll No: \n");
    scanf("%d", &s.roll);
    
    printf("Enter marks: \n");
    scanf("%f", &s.marks);

    printf("\n\nDisplaying Information\n\n");

    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Marks: %2.f\n", s.marks);

    return 0;
}