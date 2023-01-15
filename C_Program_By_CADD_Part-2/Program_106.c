// Passing structure to function

#include <stdio.h>
#include <conio.h>

struct address
{
    char city[20];
    int pin;
    char phone[14];
};

struct employee
{
    char name[20];
    struct address add;
};

void display(struct employee emp);

int main()
{
    struct employee emp;
    printf("Enter employee information\n");
    scanf("%s%s%d%s", emp.name, emp.add.city, emp.add.pin, &emp.add.pin, emp.add.phone);
    display(emp);

    return 0;
}

void display(struct employee emp)
{
    printf("Printing the details\n");
    printf("Name: %s\nCity: %s\nPin code: %d\nPhone No: %s\n", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
}