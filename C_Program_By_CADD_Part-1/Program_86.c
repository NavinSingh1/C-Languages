// strings
// write a program to find number of vowels of a strings

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{

    char str[50], v[11] = {"aeiouAEIOU"};
    int count = 0, i, j;
    printf("Enter a string\n");
    gets(str);
    for (i = 0; str[i]; i++)
    {
        for (j = 0; v[j]; j++)
        {
            if (str[i] == v[j])
            {
                count++;
                break;
            }
        }
    }

    printf("Total numbers of vowels in %s is %d\n", str, count);

    return 0;
}

// You can also do this program by this way

//     char s[11] = "Javatpoint";
// int i = 0, count = 0;
// while (s[i] != NULL)
// {
//     if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//     {
//         count++;
//     }
//     i++;
// }
// printf("The number of vowels %d\n", count);
