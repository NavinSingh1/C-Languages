//C Program For Calculator Using Switch Case
#include<stdio.h>
#include<conio.h>
int main()
{
    while (1)
    {
    float num1,num2,result;
    char op;

    printf("\nEnter the first number\n");
    scanf("%f", &num1);

    printf("Enter Operator(+,-,*,/)\n");
    scanf(" %c", &op);

    printf("Enter the second number\n");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        result = num1+num2;
        printf("%f", result);
        break;

    case '-':
        result = num1-num2;
        printf("%f", result);
        break;

    case '/':
        result = num1/num2;
        printf("%f", result);
        break;

    case '*':
        result = num1*num2;
        printf("%f", result);
        break;
    
    default:
        printf("You enter a wrong choice\n");
    }
    }
    getch();
}