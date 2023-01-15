// star pattern 31

//    1   
//   A B  
//  1 2 3 
// A B C D

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, num;
    char alpha;
    for (i = 1; i <= 4; i++)
    {
        k = 1;
        num = 1;
        alpha = 'A';
        for (j = 1; j <= 2 * 4 - 1; j++)
        {
            if (j >= 4 + 1 - i && j <= 4 - 1 + i)
            {
                if (k)
                {
                    if (i % 2 == 1)
                        printf("%d", num++);
                    else
                        printf("%c", alpha++);
                }
                else
                    printf(" ");
                k = 1 - k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}