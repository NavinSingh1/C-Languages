//C Program For Calculate Percentage Of 5 Subjects
//Percentage of Marks = (all subject marks sum) / Total Subject *100 .
#include<stdio.h>
#include<conio.h>
int main()
{
    int sub, marks, n, i, sum = 0, tmp = 0, arr[10], percentage;
    printf("\nEnter number of subjects:  \n");
    scanf("%d", &n);

    tmp = n*100;

    printf("\nEnter the Marks:  \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    percentage = (sum * 100) / tmp;
    printf("\nPercentage of student: %d\n", percentage);

    return 0;
}