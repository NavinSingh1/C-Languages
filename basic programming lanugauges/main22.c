/*
Write a program to determine wheather a charachter entered by the user is lowercase or not.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter a charachter: \n");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90)
    {
        printf("it is a uppercase\n");
    }
    else{
        printf("it is lower case");
    }
}