//C Program For Find A Generic Root Of Number
//Generic Root in one line 
// This didt done by while loop because then it will become to lengthy.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,m;

    printf("Enter any number:  \n");
    scanf("%d", &num);

    printf("Generic root: %d", (m = num%9)?m:9);

    return 0;
}