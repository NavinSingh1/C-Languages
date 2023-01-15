//it is do-while loop
//write a program to print first n natural numbers between 1 to 4
#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 1;
    do{
        printf("The value of i is %d\n", i);
        i++;
    }while(i <= 4);
}