//C Program to Compare Two Strings Using strcmp
#include<stdio.h>
#include<conio.h>
int main()
{
    char a[100], b[100];

    printf("Enter the first String: \n");
    gets(a);

    printf("Enter the second String: \n");
    gets(b);

    if (strcmp(a,b) == 0)
        printf("String are Equal\n");
    else
        printf("String are not equal\n");
    
    return 0;
}