/*
write a program to find the greatest of four numbers entered by the user
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, d, y;
    printf("Enter four numbers to find the greatest value between those numbers\n");
    scanf("%d %d %d %d",&a ,&b ,&c ,&d);
 
    if(a>b && a>c && a>d){
        if(b<c && b<d){
            y = b;
        }
        else if(c<b && c<d){
            y = c;
        }
        else if(d<b && d<c){
            y = d;
        }

        printf("Largest: %d\n", a);
        printf("Smallest: %d\n", y);
    }
   else if(b>a && b>c && b>d){
       if(a<c && a<d){
           y = a;
       }
       else if(c<a && c<d){
           y = c;
       }
       else if(d<a && d<c){
           y = d;
       }
       printf("Larget: %d\n", c);
       printf("Smallest: %d\n", y);
   }
   else if(d>a && d>b && d>c){
       if(a<b && a<c){
           y = a;
       }
       else if(b<a && b<c){
           y = b;
       }
       else if(c<a && c<b){
           y = c;
       }
       printf("Largest: %d\n", d);
       printf("Smallest: %d\n", y);
   }
   return(0);
}