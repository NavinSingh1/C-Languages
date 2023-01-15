//it is do while loop
//write a program to print natural numbers from 10  to  20 when initial loop counter is initialsied to 0.
#include<stdio.h>
#include<conio.h>C  
int main()
{
    int i = 0;
    while(i <= 20){
        if(i >= 10){
            printf("The value of i is %d\n", i);
        }
        i++; //-->it is a increament operator this means i = i+1;
    }
    return(0);
}


/*
i++ -->means first print the value then increment the value
++i -->means first increament the value then print the value
for '-'
i-- -->means first print the value then increment the value
--i -->means first increament the value then print the value
*/