// program to calculate area of circle 
#include<Stdio.h>
#include<conio.h>
int main()
{
    int r;
    float a;
    printf("Enter the radius of the circle\n");
    scanf("%d", &r);
    a=3.14*r*r;
    printf("The radius of the circle is 2.%f", a);
    getch();
}