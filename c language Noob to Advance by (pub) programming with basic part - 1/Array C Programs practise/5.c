//C Program to Check String is a Palindrome or Not
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    while (1)
    {
        char string1[20];
        int i,length;
        int flag = 0;
        printf("\n\nEnter a string: ");
        scanf("%s", string1);
        length=strlen(string1);
        for (i = 0; i < length; i++)
        {
            if (string1[i]!=string1[length-i-1])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            printf("\n\n%s is not a palindrome\n", string1);
        else
            printf("\n\n%s is Palindrome\n", string1);       
    }
    return 0;
}

