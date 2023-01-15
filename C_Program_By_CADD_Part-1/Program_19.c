// program to check alphabet using conditional operator

#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("Enter a charachter\n");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
        printf("%c is a charachter\n", a);
    else
        printf("%c is not a charachter\n", a);

    return 0;
}