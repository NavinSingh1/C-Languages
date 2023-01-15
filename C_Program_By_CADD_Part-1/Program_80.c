// adding two numbers using pointers;

#include <stdio.h>
#include <conio.h>
int main()
{
    int first, second, *p, *q, sum;
    printf("Enter two numbers\n");
    scanf("%d%d", &first, &second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("Sum of two number is: %d\n", sum);

    return 0;
}