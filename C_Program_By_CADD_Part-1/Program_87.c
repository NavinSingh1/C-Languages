// using pointer to copy content of string into another

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char *p, *q;
    printf("Enter a string\n");
    gets(p);
    printf("Before printing a string is: %s.\n", p);
    printf("After copying the content of 1st string into another string...\n");
    q = p;
    printf("The copiyed string is %s.\n", q);

    return 0;
}