// program to choose option from the user to do subtraction or addition, divison or multiplication using their choice by switch statement.
#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,choice;
    while(choice!=3)
    {
        printf("\nPress 1 for addition");
        printf("\nPress 2 for subtraction");
        printf("\nPress 3 for multiplication");
        printf("\nPress 4 for divide");
        printf("\nPress 5 for exit");
        printf("\nEnter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two number to add\n");
            scanf("%d%d",&a,&b);
            c=a+b;
            printf("The sum is %d\n", c);
            break;

        case 2:
            printf("Enter two number to subtract\n");
            scanf("%d%d",&a,&b);
            c=a-b;
            printf("The sum is %d\n", c);
            break;

        case 3:
            printf("Enter two number to multiply\n");
            scanf("%d%d",&a,&b);
            c=a*b;
            printf("The sum is %d\n", c);
            break;
        
        case 4:
            printf("Enter two number to divide\n");
            scanf("%d%d",&a,&b);
            c=a/b;
            printf("The sum is %d\n", c);
            break;

        case 5:
            exit(0);

        default:
                printf("You passed the wrong key");
            break;
        }
    }
}