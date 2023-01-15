// Nested structure

#include <stdio.h>
#include <conio.h>

struct address
{
    char city[20];
    int pin;
    char phone[20];
};

struct employee
{
    char name[50];
    struct address add;
};

int main()
{
    struct employee emp;
    printf("Enter employee information?\n");
    printf("Enter your name\n");
    scanf("%s", emp.name);
    printf("Enter your city\n");
    scanf("%s", emp.add.city);
    printf("Enter your pin\n");
    scanf("%d", &emp.add.pin);
    printf("Enter your phone number\n");
    scanf("%s", emp.add.phone);
    printf("Printing the employee informations\n");
    printf("Name: %s\nCity: %s\nPincode: %d\nPhone: %s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
    return 0;
}