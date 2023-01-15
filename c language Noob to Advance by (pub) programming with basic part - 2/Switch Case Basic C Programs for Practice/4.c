//C Program to Find Grade of a Student Using Switch Case
#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter the marks between 0 to 100\n");
    printf("Enter the Marks\n");
    scanf("%d", &marks);

    if (marks>100)
    {
        printf("Dont' become too smart please enter the number between 0 to 100\n");
    }
    else
    {
        switch (marks/10)
        {
        case 10:
            break;

        case 9:
        printf("\n Your Grade is : A\n");
        printf("Excellent");
            break;

        case 8:
        printf("\n Your Grade is : B\n");
        printf("Very good");
            break;
        
        case 7:
        printf("\n Your Grade is : C\n");
        printf("nice");
            break;

        case 6:
        printf("\n Your Grade is : D\n");
        printf("not so good");
            break;

        case 5:
        printf("\n Your Grade is : E\n");
        printf("Improved");
            break;

        case 4:
        printf("\n Your Grade is : E--\n");
        printf("Just Passed");
            break;

        default:
            printf("\n Your Grade is F\n");
            printf("Hence !! you are fail.");
        }
    }
    getch();
}