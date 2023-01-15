//C Program to find the Area of Triangle using Base and Height
#include<stdio.h>
#include<conio.h>
int main()
{
    int h,b;
    float area;
    printf("\nEnter the height of the Triangle: \n");
    scanf("%d", &h);
    printf("\nEnter the base of the Triangle: \n");
    scanf("%d", &b);

    area = (h*b)/2;
    printf("\nThe area of the triangle is: %f", area);

    return 0;
    getch();
}

//you can also do this program by this method
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
//     double a,b,c,area,s;
//     printf("Enter the sides os the triangle\n");
//     scanf("%lf%lf%lf", &a, &b, &c);

//     s=(a+b+c)/2;

//     area=sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("\nThe area of the triangle calculated using Heron's Formula is: %lf", area);

//     return 0;
//     getch();
// }