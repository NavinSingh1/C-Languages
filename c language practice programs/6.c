// Switch case and break program
#include<stdio.h>
#include<conio.h>
int main()
{
    char grade;
    printf("Enter your grade:\n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;

    case 'B':
        printf("Very good\n");
        break;

    case 'C':
        printf("well Done!!\n");
        break;

    case 'D':
        printf("Passed\n");
        break;

    case 'E':
        printf("Failed sorry better luck next time\n");
        break;

    default:
        printf("Enter an wrong keyword");
        break;
    }
    printf("Your grade is %c\n", grade);
    return 0;
}