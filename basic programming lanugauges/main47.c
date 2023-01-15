//call by value
#include<stdio.h>
#include<conio.h>
int sum (int x, int y);
int main()
{
   int x=4, y=7;
   printf("The value of 4 + 7 is %d\n", sum(x, y));
   return 0;
}
int sum (int a, int b){
    int c;
    c = a + b;
    b = 3434;
    a = 23432;
    return c;
}