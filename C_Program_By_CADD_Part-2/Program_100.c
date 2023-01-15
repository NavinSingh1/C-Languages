// program to copy first string to second string without using string copy function

#include <stdio.h>
#include <conio.h>
int main()
{
    char text1[100];
    char text2[100];
    int i;
    printf("Enter a string\n");
    gets(text1);
    for (i = 0; text1[i]; i++)
    {
        text2[i] = text1[i];
    }
    text2[i] = '\0';
    printf("Before copying the string is: %s\n", text1);
    printf("After copying the string is: %s\n", text2);
    printf("Total charachters copyied are: %d\n", i);

    return 0;
}