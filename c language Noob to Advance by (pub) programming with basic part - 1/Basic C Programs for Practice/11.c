//C Program To Find Character Is Vowel Or Not
#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter the charachter you want to check vowel or Not\n");
    scanf("%c", &a);

    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("Charachter is Vowel\n");
    }
    else
    {
        printf("Charachter is Not a vowel\n");
    }

    return 0;
    
}