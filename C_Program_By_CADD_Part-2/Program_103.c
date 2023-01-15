// Example of array of structure

#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[50];
};

int main()
{
    int i;
    struct student st[5];
    printf("Enter record of 5 students\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter your name\n");
        scanf("%s", &st[i].name);
        printf("Enter your Roll No\n");
        scanf("%d", &st[i].rollno);
    }
    printf("Student information list\n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\n", st[i].name);
        printf("Roll No: %d\n", st[i].rollno);
    }

    return 0;
}