//Print the multiplication table of user choice.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter the number of which u want to print the table of \n");
    scanf("%d", &num);
    printf("The table of %d\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}