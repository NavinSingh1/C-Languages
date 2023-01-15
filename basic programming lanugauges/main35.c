/*
write a program with three functions
1. Good morning function which prints "Good Morning"
2. Good afternoon function which prints "Good afternoon"
3. Good night function which prints "Good night"
main() should call all of these in order 1-> 2-> 3
*/
#include<stdio.h>
#include<conio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
    goodafternoon();
    goodnight();
    return(0);
}

void goodmorning(){
    printf("Good morning Navin\n");
}



void goodafternoon(){
    printf("Good afternoon Navin\n");
}


void goodnight(){
    printf("Good night Navin\n");
}