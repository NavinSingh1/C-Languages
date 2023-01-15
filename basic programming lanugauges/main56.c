//Write a program to accept marks of five students in an array and print them to the screen.
//in easy method using loops.
#include<stdio.h>
#include<conio.h>
int main()
{
   int marks[5];
   for(int i=0; i<5; i++)
   {
       printf("Enter the values of marks for students %d: ", i+1);
       scanf("%d", &marks[i]);
   }

   for(int i=0; i<5; i++)
   {
       printf("The value of marks for student %d is: %d\n", i+1, marks[i]);
   }
   return 0;
}