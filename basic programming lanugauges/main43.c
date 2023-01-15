/*
what will the following line produce in a c program :
printf("%d %d %d\n", a ,++a ,a++);
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 3;
    printf("%d %d %d\n",a ,++a ,a++);  //-->it wil start executing the funtion from right to left,so it will print (5 5 3)
    return(0);
}