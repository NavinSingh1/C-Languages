// swaping example using function takes something return nothing

#include <stdio.h>
#include <conio.h>
void swap(int x, int y);
int main()
{
    int a, b;
    printf("Enter two number to swap\n");
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("After swapping the number is a=%d and b=%d\n", a, b);
    return 0;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swapping the number is a=%d and b=%d\n", x, y);
}