//WAP Program to Remove Given Word from a String
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j = 0, k = 0, n = 0;
    int flag = 0;

    char str[100], new[100], word[100];

    printf("Enter any sring to remove a word from string: ");
    gets(str);

    printf("\nEnter any word you want to be removed:  ");
    gets(word);

    for (i = 0; str[i] != '\0'; i++)
    {
        k = i;

        while (str[i] == word[j])
        {
            i++,j++;
            if (j == strlen(word))
            {
                flag = 1;
                break;
            }
        }
        j=0;
        if (flag == 0)
            i=k;
        else
            flag = 0;

        new[n++] = str[i];
    }

    new[n] = '\0';

    printf("\nAfter Removing Word From String: %s", new);
}