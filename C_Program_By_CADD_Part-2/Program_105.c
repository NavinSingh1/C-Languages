// Embeded structure

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
    int id;
    char name[30];
    struct date
    {
        int dd;
        int mm;
        int yyyy;
    } doj;
} e1;

int main()
{
    e1.id = 101;
    strcpy(e1.name, "Navin singh");
    e1.doj.dd = 10;
    e1.doj.mm = 11;
    e1.doj.yyyy = 2022;

    printf("Employee id: %d\n", e1.id);
    printf("Employee Name: %s\n", e1.name);
    printf("Employee date of joinging: %d/%d/%d\n", e1.doj.dd, e1.doj.mm, e1.doj.yyyy);
    return 0;
}