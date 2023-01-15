// Basic program to show use of nested for loops
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\nNested loops are usually used to print a pattern in c. \n");
    printf("\nThey are also used to print out the matrix using a 2 dimensional array. \n");

    int i,j,k;
    printf("\nOutput of the nested loop is :\n");
    for (i = 0; i < 5; i++)
    {
       printf("\t\t\t\t");
       for (j = 0; j < 5; j++)
           printf("* ");

           printf("\n");
    }
       return 0;
}