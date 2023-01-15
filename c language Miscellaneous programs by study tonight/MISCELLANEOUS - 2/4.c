//c program for shutdown the windows
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("Do you want to shutdown your PC now(Y/N)?");
    scanf("%c", &ch);

    if (ch == 'y' || ch == 'Y')
    {
        system("C:\\WINDOWS\\system64\\shutdown /s");
    }
    return 0;
}