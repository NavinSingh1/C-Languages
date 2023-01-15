//write a program to count the occurence of a given charachter in a string.
#include<stdio.h>
#include<conio.h>
int occurence(char st[], char c){
    char *ptr = st;
    int count = 0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "Harry";
    int count = occurence(st, 'r');
    printf("Occurences = %d", count);
    return 0;
}



/*
QUIZ
write a program to check wheather a given charachter is present in a string or not.
*/