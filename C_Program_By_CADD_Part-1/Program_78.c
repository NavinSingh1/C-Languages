// Pointers examples

#include <stdio.h>
#include <conio.h>
int main()
{
    int number = 50;
    int *p;
    p = &number;
    printf("Address of a p variable is %d\n", p);
    printf("Value of a p variable is %d\n", *p);
    return 0;
}