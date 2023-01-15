// constant pointers

#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 100, b = 200;
    const int *ptr;
    ptr = &a;
    ptr = &b;
    printf("Value of ptr is %u\n", *ptr);

    return 0;
}