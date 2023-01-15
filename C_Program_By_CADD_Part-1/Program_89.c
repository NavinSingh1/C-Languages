// example of getchar() & putchar()

#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("Enter your name\n");
    c = getchar();
    printf("Your name is \n");
    putchar(c);
    return 0;
}