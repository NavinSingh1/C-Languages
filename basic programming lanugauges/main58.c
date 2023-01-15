//pointer artimettic
#include<stdio.h>
#include<conio.h>
int main()
{
    //example of integer 
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr = ptr - 1;
    // ptr = ptr + 1;
    // ptr++;
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    //examples of charachter
    // char c = 34;
    // char *ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    // //ptr = ptr - 1;
    // ptr = ptr + 1;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);
    // return 0;

    //examples of float
    float f = 3.4;
    float *ptr = &f;
     printf("The value of ptr is %u\n", ptr);
    //ptr = ptr - 1;
    ptr = ptr + 1;
    ptr = ptr + 1;
    // ptr++;
    // ptr++;
    printf("The value of ptr is %u\n", ptr);
}