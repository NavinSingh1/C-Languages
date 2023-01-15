#include<stdio.h>
#include<conio.h>
int main()
{
    char str[] = "Harry";
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}