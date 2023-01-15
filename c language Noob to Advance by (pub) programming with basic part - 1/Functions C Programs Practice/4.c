//Display Prime Numbers Between Intervals
#include<stdio.h>
#include<conio.h>
#include<math.h>

int check_prime(int num);

int main()
{
    int n1,n2,i,flag;
    printf("Enter two numbers(intervals): \n");
    scanf("%d%d", &n1, &n2);
    printf("Prime numbers between %d and %d are: \n", n1,n2);
    for (i = n1; i < n2; ++i)
    {
        flag=check_prime(i);
        if (flag==0)
            printf("%d\n", i);
    }
    return 0;    
}

int check_prime(int num)
{
    int j,flag=0;
    for(j=2;j<=num/2;++j){
        if (num%j==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}