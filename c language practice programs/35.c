// Program to print the values of x and y in some other place in the output.
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
};
int main()
{
    int i;
    for(i=1;i<=10;i++){
    gotoxy(20,i);
    printf("Hello");
    }
    getch();
}