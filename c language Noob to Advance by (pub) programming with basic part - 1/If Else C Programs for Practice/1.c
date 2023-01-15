//C Program To Check Character Is Uppercase, Lowercase Alphabet Or A Digit Or A Special Symbol
#include<stdio.h>
#include<Conio.h>
int main()
{
    char a;
    printf("Press any Key: ");
    scanf("%c", &a);

    if (a>=65 && a<90)
    {
        printf("An Upper Case Letter");
    }
    else
    {
        if (a>=97 && a<=122)
        {
            printf("A lower Case");
        }
        else
        {
            if (a>=48 && a<=57)
            {
                printf("A Digit");
            }
            else
            {
                printf("A Special Symbol\n");
            }
            
        }
        
    }
       
}