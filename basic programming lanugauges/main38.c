/*
write a function of a number in terms of itself , we can program it using recursion.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("The value of factorial %d is %d", a, factorial(a));
   return(0);
}

int factorial(int x){
    printf("calling factorial(%d)\n", x);
  if(x==1 || x==0){
      return 1;
  }
  else{
      return x * factorial(x-1);
  }
}