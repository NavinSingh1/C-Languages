// C Program To Store Information of Students Using Structure
#include<stdio.h>
#include<conio.h>

struct student{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int i,n;

    printf("Enter the Total Number Of Student\n");
    scanf("%d", &n);

    struct student s[n];

    printf("\nEnter information of students (Marks Should be Float Like 78.00):\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No.:");
        scanf("%d", &s[i].roll);

        printf("Name:");
        scanf("%s", s[i].name);

        printf("MArks:");
        scanf("%f",&(s[i].marks));
    }
    
    printf("\nDisplaying All ind=formation of students:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No.:%d\n", s[i].roll);
        printf("\nName.:%s\n", s[i].name);
        printf("\nMarks.:%f\n", s[i].marks);
    }

    return 0;
}