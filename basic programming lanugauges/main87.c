//write a program to read a text file charachter by charachter and write its content twice in a seperate file.
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("filei/a.txt", "r");
    ptr2 = fopen("filei/b.txt", "w");

    char c = fgetc(ptr1);
    while(c!=EOF){
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr1);
    return 0;
}