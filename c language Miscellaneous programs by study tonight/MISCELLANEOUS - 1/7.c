// C program to show basic Arithmetic Operations and role of Typecasting
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,add,subtract,multiply;
    float divide;

    printf("Enter two integers: \n");
    scanf("%d%d", &a,&b);

    add=a+b;
    subtract=a-b;
    multiply=a*b;
    divide=a/b;

    printf("\nAddition of the numbers = %d\n", add);
    printf("\nSubtraction of the numbers = %d\n", subtract);
    printf("\nMultiplication of the numbers = %d\n", multiply);
    printf("\nDividing 1st number from 2nd = %f\n", divide);

    return 0;
    getch();
}


//Arithmetic Operations with Typecasting
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a,b,add,subtract,multiply,remainder;
//     float divide;

//     printf("Enter two integers: \n");
//     scanf("%d%d", &a,&b);

//     add=a+b;
//     subtract=a-b;
//     multiply=a*b;
//     divide=a/b;
//     remainder=a%b;

//     printf("\nAddition of the numbers = %d\n", add);
//     printf("\nSubtraction of the numbers = %d\n", subtract);
//     printf("\nMultiplication of the numbers = %d\n", multiply);
//     printf("\nDividing 1st number from 2nd = %f\n", divide);
//     printf("\nRemainder 1st number from 2nd = %f\n", remainder);
// }
