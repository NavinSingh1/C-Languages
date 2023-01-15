// Write a program to print first 10 odd natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, x = 1;
    while (i <= 10)
    {
        printf("%d\n", x);
        x = x + 2;
        i++;
    }
    return 0;
}

/*
for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", 2 * i - 1);
    }
*/

/*
int i=1;
while(i<=10){
    printf("%d\n", 2*i-1);
    i++;
}
*/