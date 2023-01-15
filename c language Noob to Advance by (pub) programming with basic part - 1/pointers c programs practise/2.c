//C Program To Compare Two String Using Pointer
#include <stdio.h>
#include <conio.h>
int main()
{
    char string1[50], string2[50], *str1, *str2;
    int i, equal =0;

    printf("Enter the First String:  \n");
    scanf("%s", &string1);

    printf("Enter the Second String:  \n");
    scanf("%s", &string2);

    str1 = string1;
    str2 = string2;

    while (*str1==*str2)
    {
        if (*str1=='\0' || *str2=='\0')
            break;

        str1++;
        str2++;
    }
    
    if( *str1 == '\0' && *str2 == '\0' )
        printf("\nBoth String are Equal\n");
    
    else
        printf("\nBoth String are not Equal\n");

    return 0;
}