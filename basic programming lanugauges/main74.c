//write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position for slice.
#include<stdio.h>
#include<conio.h>
void slice(char *st, int m, int n){
    int i = 0;
    while((m+i)<n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}

int main()
{
     char st[] = "Harry";
     slice(st, 1, 4);
     printf("%s", st);
     return 0;    
}