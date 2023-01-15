//C Program To Read Integer (N) And Print First Three Powers (N^1,N^2,N^3)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num;
    printf("\nEnter the number: \n");
    scanf("%d", &num);
    printf("\nOutput is \n\n");
    printf("%d, %d, %d \n\n", num,num*num,num*num*num);
    //                         5    5*5       5*5*5
    return 0;
}

/*

NOTE:-
use this program only by power function method pow(x,y);
*/

