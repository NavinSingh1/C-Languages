//write  a program to decrypt the string.
#include<stdio.h>
#include<conio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
   char c[] = "IbssZ";
   decrypt(c);
   printf("Decrypted string is: %s", c);
   return 0;
}