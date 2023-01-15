// Below is a program to swap two number susing bitwise operator.
#include<stdio.h>
#include<conio.h>
int main(){
    int x = 6, y = 4;
    x = x^y;
    y = x^y;
    x = x^y;
    printf("x = %d and y = %d", x, y);
    getch();
    return 0;
}