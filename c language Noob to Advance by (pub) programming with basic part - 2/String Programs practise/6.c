//Reverse a String Without Using Library
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100], temp;
    int i, j = 0;

    printf("Enter the string: \n");
    gets(str);

    strrev(str);

    printf("\nReverse Words in a String is: %s\n", str);

    return 0;
}