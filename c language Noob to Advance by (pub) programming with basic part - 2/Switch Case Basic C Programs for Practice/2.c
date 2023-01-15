//C Program To Print Day of Week Name Using Switch Case
#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    printf("Monday will be the first Days and So On\n");
    printf("Enter any number between (1 to 7):");
    scanf("%d", &choice);
    printf("\n");
    switch (choice)
    {
    case 1:
        printf("Today is Monday");
        break;
    
    case 2:
        printf("Today is Tuesday");
        break;

    case 3:
        printf("Today is Wednesday");
        break;

    case 4:
        printf("Today is Thursday");
        break;

    case 5:
        printf("Today is Friday");
        break;

    case 6:
        printf("Today is Saturday");
        break;

    case 7:
        printf("Today is Sunday");
        break;
    
    default:
        printf("Dont't be oversmart!!!...Please try again and enter the number between 1 to 7\n");
    }
    getch();
}