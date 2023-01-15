//Write a Program to print your name at the center of the screen
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
 
int main()
{
    int x=30,y=10;
    char ch;
    gotoxy(x,y);
    printf("Navin");

    return 0;
}