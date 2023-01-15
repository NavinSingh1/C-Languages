//C Program For Reverse A String Using Library Function
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50], *revStr;

    printf("\nEnter any string without space: \n");
    scanf("%s", str);

    revStr = strrev(str);
    printf("\nReverse string is: %s\n", revStr);

    return 0;
}