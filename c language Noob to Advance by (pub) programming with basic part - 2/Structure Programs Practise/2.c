//C Program To Store Information of Students Using Structure
#include<stdio.h>
#include<conio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};


int main()
{
    int i,n;

    printf("Enter the Total Number of students: \n");
    scanf("%d", &n);

    struct student s[n];
    
    printf("\nEnter Information of Students (Marks Should be Float Like 78.00):\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No. : \n");
        scanf("%d", &(s[i].roll));

        printf("Name: \n");
        scanf("%s", s[i].name);

        printf("Marks: \n");
        scanf("%f", &(s[i].marks));
    }

    printf("\nDisplaying All Information of Student: \n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No. : %d", s[i].roll);
        printf("\nName. : %s", s[i].name);
        printf("\nMarks. : %f", s[i].marks);
        printf("\n\n");
    }
    return 0;
}
