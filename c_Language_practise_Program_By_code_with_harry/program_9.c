// C program to reverse a string
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char a[20];
    printf("Enter a string\n");
    gets(a);
    printf("The reverse string is %s\n", strrev(a));
    return 0;
}