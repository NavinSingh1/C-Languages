//C Program to Convert String to Integer Without Using Library Function atoi()
#include <stdio.h>
#include <conio.h>

int strToint(char[]);

int main()
{

        char str[10];
        int intNum;

        printf("\n\nEnter Integer Number: ");
        scanf("%s", str);

        intNum = strToint(str);

        if (intNum == 0)
        {
            printf("\nEnter The Number Not String\n\n");
        }
        else
        {
            printf("\n\nEquivalent Integer Value: %d", intNum);
        }

    return 0;
}

int strToint(char str[])
{

    int i = 0, sum = 0;

    while (str[i] != '\0')
    {

        if (str[i] < 48 || str[i] > 57)
        {
            printf("\n\nCan't Convert Into Integer");
            return 0;
        }
        else
        {
            sum = sum * 10 + (str[i] - 48);
            i++;
        }
    }

    return sum;

}