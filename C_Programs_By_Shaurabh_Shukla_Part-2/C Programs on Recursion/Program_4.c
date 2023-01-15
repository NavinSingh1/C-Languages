// Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>
#include <conio.h>
void print(int n);
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    print(a);
    return 0;
}

void print(int n)
{
    if (n >= 1)
    {
        printf("%d\n", n);
        print(n - 1);
    }
}