// Examples of pointers 
// swapping two numbers using pointers

#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10, b = 20, *p1 = &a, *p2 = &b;
    printf("Before swaping the numbers are: a=%d and b=%d\n", *p1, *p2);
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("After swapping a=%d and b= %d\n", *p1, *p2);
    return 0;
}