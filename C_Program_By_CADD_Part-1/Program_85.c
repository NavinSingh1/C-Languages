// Program to passing pointers through a function

void func1(void (*ptr)());
void func2();
#include <stdio.h>
#include <conio.h>
int main()
{
    func1(func2);

    return 0;
}

void func1(void (*ptr)())
{
    printf("Function is called\n");
    (*ptr)();
}

void func2()
{
    printf("Fucntion 2 is called\n");
}