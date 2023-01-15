//write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formated.
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    int num;
    printf("Enter the integer you need the table of: \n");
    scanf("%d", &num);
    ptr = fopen("filei/table.txt", "w");
    for(int i=0; i<10; i++){
        fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(ptr);
    return 0;
}