//C Program to Count Number of Digits of a Number (Integer)
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0;

    printf("Enter any number to count digit:  \n\n");
    scanf("%d", &n);

    while (n!=0)
    {
        n/=10;
        count++;
    }

    printf("\nNumber of Digits is = %d", count);

    return 0;
}

// we can do this program using this method also
/*
#include<stdio.h>
#include<math.h>
int main()
{
  //Ghanendra Yadav
   int n,count=0;
  
   printf("Enter Any Number To Count Digit : \n\n");
   scanf("%d", &n);
  
   count=log10(n)+1;
   
   printf("\nNumber of Digits Is = %d",count);
 return 0;
}
*/