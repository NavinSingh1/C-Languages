// b. using input supplied by the user
#include<stdio.h>
#include<conio.h>
int main()
{
    int length, breadth;
    printf("What is the length of the rectangle\n");
    scanf("%d", &length);
    printf("What is the breadth of the rectangle\n");
    scanf("%d", &breadth);
    printf("The length and breadth of the rectangle is %d", length*breadth);
    getch();
    return(0);
}