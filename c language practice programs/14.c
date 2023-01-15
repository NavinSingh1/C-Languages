#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("i = %d\n", i);
    }

    printf("\n\nThe value of i after exiting the loop is %d\n", i);

    printf("\nRember that the loop condition checks the conditional statement before it loops again.\n");

    printf("Consequently, when i equals 10, the loop breaks. \n\n");

    printf("i is updated before the condition is checked - hence the value of i after exiting the loop is 10. \n");

    return 0;
    getch();
    
}