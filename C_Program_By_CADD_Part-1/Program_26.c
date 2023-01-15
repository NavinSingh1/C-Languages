// program to input marks of five subjects physics, chemistry, biology, mathematics and computer. Calculate percentage and grade according to the following.

#include <stdio.h>
#include <conio.h>
int main()
{
    float physics, chemistry, biology, maths, computer, total, percentage;
    printf("Enter marks for five subjects\n");
    scanf("%f%f%f%f%f", &physics, &chemistry, &biology, &maths, &computer);
    total = physics + chemistry + biology + maths + computer;
    percentage = total / 5;
    if (percentage >= 90)
        printf("Your marks is %.2f\nYou Got Grade 'A' position\n", percentage);
    else if (percentage >= 80 && percentage <= 90)
        printf("Your marks is %.2f\nYou Got Grade 'B' position\n", percentage);
    else if (percentage >= 70 && percentage <= 80)
        printf("Your marks is %.2f\nYou Got Grade 'C' position\n", percentage);
    else if (percentage >= 60 && percentage <= 70)
        printf("Your marks is %.2f\nYou Got Grade 'D' position\n", percentage);
    else if (percentage >= 40 && percentage <= 60)
        printf("Your marks is %.2f\nYou Got Grade 'E' position\n", percentage);
    else
        printf("Your grade is %.2f\nYou Got Grade 'E' position\n", percentage);

    return 0;
}