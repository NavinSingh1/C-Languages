// function pointers

#include <stdio.h>
int add(int a, int b);
int main()
{
    int a, b;
    int (*ip)(int, int);
    int result;
    printf("Enter the values of a and b:\n");
    scanf("%d%d", &a, &b);
    ip = add;
    result = (*ip)(a, b);
    printf("Value after addition is %d\n", result);

    return 0;
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}