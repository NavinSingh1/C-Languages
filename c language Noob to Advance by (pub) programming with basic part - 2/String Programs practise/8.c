//C Program to Check String is a Palindrome or Not
#include<stdio.h>
#include<conio.h>
int main()
{
    char string1[20];
    int i, length;
    int flag = 0;
    printf("Enter a string: \n");
    scanf("%s", &string1);

    length=strlen(string1);
    for (i = 0; i < length; i++)
    {
        if(string1[i]!=string1[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("%s is Not a Palindrome\n", string1);
    else
        printf("%s is Palindrome\n", string1);
    
    return 0;
    
}