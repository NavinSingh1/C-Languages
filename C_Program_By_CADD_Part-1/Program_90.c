// Example of strlen function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ch[20] = {'J', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
    printf("Length of the string is : %d\n", strlen(ch));

    return 0;
}