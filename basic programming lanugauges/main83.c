//create an array of 5 complex number created in problem 5 and display then with the help of a display function. The value must be taken as an input from the user.
#include<stdio.h>
#include<conio.h>
typedef struct complex{
    int real;
    int imag;
}img;

void display(img c){
       printf("The value of real part is %d\n", c.real);
       printf("The value of imaginary part is %d\n", c.imag);
}

int main()
{
   img cnums[5];
   for(int i=0; i<5; i++){
       printf("Enter the real value for %d num\n", i+1);
       scanf("%d", &cnums[i].real);

       printf("Enter the complex value for %d num\n", i+1);
       scanf("%d", &cnums[i].imag);
   }

   for(int i=0; i<5; i++){
       display(cnums[i]);
   }

   return 0;
}