// sum of series - 1
// 1+(1+2)+(1+2+3)+.....+(1+2+3+4+...+N)

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, N, s, i, sum = 0;
    printf("Enter a natural number\n");
    scanf("%d", &N);
    for (n = 1; n <= N; n++)
    {
        s = 0;
        for (i = 1; i <= n; i++)
            s = s + i;
        sum = sum + s;
    }
    printf("Sum is %d\n", sum);

    return 0;
}