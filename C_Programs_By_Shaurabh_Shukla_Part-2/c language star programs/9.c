#include<Stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for (i = 1; i <= 4; i++)
    {
        k='A';
        for (j = 1; j <= 7; j++)
        {
            if (j<=5-i || j>=3+i){
                printf("%c", k);
                j<4?k++:k--;
            }
            else{
                printf(" ");
                if (j==4)
                k--;
            }
        }
        printf("\n");
    }
    getch();
}

/*
This program will print like this
 ABCDCBA
 ABC CBA
 AB   BA
 A     A
*/