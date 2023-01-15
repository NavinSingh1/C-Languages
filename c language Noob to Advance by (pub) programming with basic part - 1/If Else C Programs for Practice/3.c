//C Program For Check You Are Eligible For Voting Or Not
#include<stdio.h>
#include<conio.h>
int main()
{
    int age,temp=0;;
    while (1)
    {
        printf("Enter your Age Here\n");
        scanf("%d", &age);

        if (age >= 18 && age < 100)
        {
            printf("Congratulation!!! You are Eligible For Voting\n\n");
        }
        else if (age >= 100)
        {
            printf("You are Eligible But we Suggest You to Take a rest\n");
        }
        else if(age < 18)
        {
            temp = 18 - age;
            printf("You Are not Eligible or You are Not Mature\n\n");
            printf("Wait %d Years For Vote.\n", temp);
        }
    }
        return 0;
}