//C Program to Count Vowels, Consonants, Digits and Spaces in Given String
#include<stdio.h>
#include<conio.h>
int main()
{
    char line[1000];
    int i,v,c,ch,d,s,o;

    o=v=c=ch=d=s=0;
    printf("Enter a line of string: \n");
    gets(line);

    for (i = 0; line[i] != '\0'; ++i)
    {
        if (line[i]=='a' || line[i]=='e' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
        ++v;
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        ++c;
        else if (line[i] >= '0' && c<='9')
        ++d;
        else if (line[i] == ' ')
        ++s;
    }
    printf("Output is Below\n");

    printf("Total Number of Vowels are: %d\n", v);
    printf("Total Number of Consonants are: %d\n", c);
    printf("Total Number of Digits are: %d\n", d);
    printf("Total Number of White spaces are: %d\n", s);

    return 0;
    
}