//write a program to encrypt a string by adding 1 to the ascii value of its charachters.
//then modified that program only to decrypt that encryption code.
#include<stdio.h>
#include<conio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
     char c[] = "Harry";
     encrypt(c);
     printf("Encrypted string is: %s", c);
     return 0;
}