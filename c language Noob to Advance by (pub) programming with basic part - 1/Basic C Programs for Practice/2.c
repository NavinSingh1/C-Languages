//C Program To Print Ascii Value Of Character
#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    int b;
    printf("Enter the charachter ");
    scanf("%c", &a);
    b = a;
    printf("The ASCII value of a is %d", b);

    return 0;
}