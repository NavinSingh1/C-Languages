// Example of goto Keyword

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i = 1;
    printf("Enter the number whose table you want to print\n");
    scanf("%d", &num);
table:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
        goto table;
    return 0;
}