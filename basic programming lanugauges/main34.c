//function program
#include<stdio.h>
#include<conio.h>
void display(); //function prototype
int main()
{
    int a;
    printf("Initialising display function\n");
    display(); //function call
    printf("Display function finished its work\n");
    return(0);
}
//function defination
void display(){
    printf("This is display\n");
}