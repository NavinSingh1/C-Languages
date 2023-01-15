// print your name by taking gets and print name by puts

#include <stdio.h>
#include <conio.h>
int main()
{
    char name[50];
    printf("Enter your name\n");
    gets(name);
    printf("Your name is\n");
    puts(name);
    return 0;
}