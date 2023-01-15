// Structures
// program to print employee name and id using structures

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20];
} e1;

int main()
{
    printf("Enter id\n");
    scanf("%d", &e1.id);
    printf("Enter your name\n");
    strcpy(e1.name, "Navin kumar singh");
    printf("Employee details\n");
    printf("Name: %s\n", e1.name);
    printf("Name: %d\n", e1.id);
    return 0;
}