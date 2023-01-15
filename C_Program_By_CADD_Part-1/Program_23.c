// program to input a charachter and check wheather it is number alphabet or special charachters

#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("Enter a charachter\n");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
        printf("%c is a charachter\n", a);
    else if (a >= '0' && a <= '9')
        printf("%c is the number\n", a);
    else
        printf("%c is a special charachter\n", a);

    return 0;
}