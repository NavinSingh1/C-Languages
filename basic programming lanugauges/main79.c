//write a program to store the details of 3 employees from user defined data. use the structure declared above.
//modify this program later because it is not correct.
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter the code for e1: ");
    scanf("%d", &e1.code);
    printf("Enter the salary for e1: ");
    scanf("%.3f", &e1.salary);
    printf("Enter the name for e1: ");
    scanf("%s\n", e1.name);

    printf("Enter the code for e2: ");
    scanf("%d", &e2.code);
    printf("Enter the salary for e2: ");
    scanf("%.3f", &e2.salary);
    printf("Enter the name for e2: ");
    scanf("%s\n", e2.name);

    printf("Enter the code for e3: ");
    scanf("%d", &e3.code);
    printf("Enter the salary for e3: ");
    scanf("%.3f", &e3.salary);
    printf("Enter the name for e3: ");
    scanf("%s\n", e3.name);


}