//practise sheet
/*
   which of the following is invalid in c?
   (i) ->int a; b = a;
   (ii) -> int v = 3^3;
   (iii) -> char dt = '21 Dec 2020';
*/
// solution of answer (i)
#include<stdio.h>
#include<conio.h>
int main()

{
    int a; b = a; //->it is a wrong way.
    //int a; int b=a; //->if u write in this way it will be correct otherwise the compiler will show error.
    return(0);
}

//solution of answer 2

{
    int v = 3^3;
    printf("the power of 3 to the power 3 is %d", v);//-> it is valid but it will not calculate the power of 3 to the power 3.
}

{
    char dt = '2';//->it will ask for only one charachter in the string
}