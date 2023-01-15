// program to calculate length of the string//

//without using predefined function
#include<stdio.h>
#include<conio.h>
#include<string.h>
// int main()
// {
//     char s[20];
//     int i;
//     printf("Enter your full name\n");
//     gets(s);
//     for (i = 0; s[i]!='\0'; i++);
//     printf("Length of the string is %d", i);
//     getch();
// }

// using predefined function
//int strlen() --> using this function
int main()
{
    char s[20];
    int i;
    printf("Enter your full name\n");
    gets(s);
    i=strlen(s);
    printf("Length of the string is %d", i);
    getch();
}
