// Write a C Program to Convert a person's name in Abbreviated 
#include<stdio.h>
#include<conio.h>
int main()
{
    char fname[20];
    char mname[20];
    char iname[20];
    printf("Enter the First Name Middle Name & Last Name \n");
    scanf("%s%s%s", fname,mname,iname);
    printf("Abbreviated name: ");
    printf("%c. %c. %s\n", fname[0], mname[0], iname);

    return 0;
}